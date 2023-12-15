#include<stdio.h>
#include<conio.h>

int main()
{
	float balance,bonus;
	char gender;
	clrscr();
	printf("Enter balance:");
	scanf("%f",&balance);
	printf("Enter gender:");
	scanf(" %c",&gender);
	bonus=balance/50;
	if(gender=='F'&&balance>5000)
		bonus=bonus+(balance/20);
	balance=balance+bonus;
	printf("The new balance is %.2f",balance);
	getch();
	return 0;
}

/*
O/P:
Enter balance:7000
Enter gender:F
The new balance is 7490
*/