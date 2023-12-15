#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char username[11];

void clearScreen(){
	system("cls");
}

double checkBalance(){
	FILE *fp = fopen("test.txt", "r");
	if (fp == NULL) {
		printf("Error opening file!\n");
		return 0;
	}
	char buffer[1024];
	int row = 0, col = 0;
	while (fgets(buffer, 1024, fp)) {
		col = 0;
		row++;
		if (row == 1) continue;
		char* value = strtok(buffer, ",");
		while (value) {
			if (strcmp(value, username) == 0) {
				value = strtok(NULL, ",");
				value = strtok(NULL, ",");
				value = strtok(NULL, ",");
				return atof(value);
			}


			value = strtok(NULL, ",");
			col++;
		}
	}
	fclose(fp);
	return 0;
}

void transfer(){
	double currentBalance;
	double transferAmount;
	char Ypn[50], pNum[50];
	currentBalance = checkBalance();
	printf("enter the amount you want to transfer: ");
	scanf("%lf", &transferAmount);
	printf("\n enter your phone number again: ");
	scanf("%s", Ypn);
	printf("\nenter the account holder's number you want to transfer to: ");
	scanf("%s", pNum);
	if (transferAmount > currentBalance) {
		printf("INSUFFICIENT BALANCE!!!\n");
	}
	else {
		FILE *fp = fopen("test.txt", "r+");
		if (fp == NULL) {
			printf("Error opening file!\n");//comment arko
			return;
		}
		char buffer[1024];
		int row = 0, col = 0;
		while (fgets(buffer, 1024, fp)) {
			col = 0;
			row++;
			if (row == 1) continue;
			char* value = strtok(buffer, ",");
			while (value) {
				if (strcmp(value, pNum) == 0) {
					value = strtok(NULL, ",");
					value = strtok(NULL, ",");
					value = strtok(NULL, ",");
					double newBalance = atof(value) + transferAmount;
					fprintf(fp, "%lf", newBalance);
					fflush(fp);
				}
				value = strtok(NULL, ",");
				col++;
			}
		}
		fclose(fp);
		fp = fopen("test.txt", "r+");
		if (fp == NULL) {
			printf("Error opening file!\n"); //arko comment rakhda ni huncha
			return;
		}
		row = 0, col = 0;
		while (fgets(buffer, 1024, fp)) {
			col = 0;
			row++;
			if (row == 1) continue;
			char* value = strtok(buffer, ",");
			while (value) {
				if (strcmp(value, Ypn) == 0) {
					value = strtok(NULL, ",");
					value = strtok(NULL, ",");
					value = strtok(NULL, ",");
					double newBalance = atof(value) - transferAmount;
					fprintf(fp, "%lf", newBalance);
					fflush(fp);
				}
				value = strtok(NULL, ",");
				col++;
			}
		}
		fclose(fp);
		printf("\nMoney transfer successful!\n");
	}
}

void homepage(){
	clearScreen();
	printf("\t\t\tWelcome to your account\n\t\t\t-----------------------\n");
}
void login(){
	clearScreen();
	printf("\t\t\t\t\t\tLOGIN PAGE\n\t\t\t\t\t\t----------\n");
	char phoneNum[11],password[16];
	printf("enter your Phone Number::");
	scanf("%s",&phoneNum);
	printf("enter your password::");
	scanf("%s",&password);

	FILE *fp = fopen("test.txt", "r");
	char buffer[1024];
	int row=0,col=0;
	int t1,t2;
	while(fgets(buffer,1024,fp)){
		col = 0;
		row++;
		if(row==1)
			continue;

		char* value = strtok(buffer, ", ");
		while(value){
			if(col==1){

				if(strcmp(value,phoneNum)==0)
					t1 =1;
				else
					t1 =0;
			}
			if(col==2){
				if(strcmp(value,password)==0)
									t2 =1;

				else
					t2=0;
			}

			if(t1==1 && t2==1)
				break;

			value= strtok(NULL,", ");
				col++;
			}
			printf("\n");
		}

	if(t1==1 && t2==1){
		strcpy(username,phoneNum);
		printf("Signing in.....");
		//sleep(3);
		printf("you have successfully singed-in...");
		//sleep(1);
		homepage();

	}
	else
		printf("username and password doesn't match...Please try again Later.");
	fclose(fp);

}

int createAccount(){
	struct acc{
		char fName[40],lName[25],address[40],password[16],rePassword[16], pNum[11];
		int pin;
		double balance;
	}acc1;
	//entering the account detail and storing it in a structure
	acc1.balance = 0;
	printf("enter your first name::");
	scanf("%s",&acc1.fName);

	printf("enter your last name::");
	scanf("%s",acc1.lName);

	printf("enter your address::");
	scanf("%s",&acc1.address);

	printf("enter your phone num::");
	scanf("%s",&acc1.pNum);

	printf("enter your password::");
	scanf("%s",&acc1.password);

	printf("please enter your password again::");
	scanf("%s",&acc1.rePassword);

	printf("enter your 4 digit pin for transaction::");
	scanf("%s",&acc1.pin);

	if(strcmp(acc1.password,acc1.rePassword)==0)
		printf("you have created an account.");
	else
		printf("your password doesn't match please try again..");
	strcat(acc1.fName,acc1.lName);

	//opening the file and entering the data
	FILE* fp = fopen("test.txt", "a+");
	if(!fp){
		printf("Sorry we couldn't connect to the server. Please try again later.");
		return 0;
	}

	fprintf(fp, "%s,%s,%s,%i,%lf,%s\n", acc1.fName,acc1.pNum,acc1.password,acc1.pin,acc1.balance,acc1.address);
	fclose(fp);
	printf("Redirecting to Login page......");
	login();
	}


int main()
{
	int n;
	char r[256];
	clearScreen();
	printf("\t\t\t\t\t\tWELCOME TO OUR BANK MANAGEMENT SYSTEM\n\t\t\t\t\t\t-------------------------------------");
	printf("\nEnter your choice::\n1)Create an account\n2)Sign-in\n3)Exit\n");
	scanf("%i",&n);
	switch(n){
	case 1:
		createAccount();
		break;
	case 2:
		login();
		//homepage();
		break;
	case 3:
		return 0;
	default:
		printf("The entered number was invalid. Please try again :)");
	}
	return 0;
}
