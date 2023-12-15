#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	struct employee
	{
		char name[20];
		char address[20];
		char phone[20];
	}emp[10],temp;
	int i,j,n;
	clrscr();
	printf("Enter number of employees:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name:");
		fflush(stdin);
		gets(emp[i].name);
		printf("Enter address:");
		gets(emp[i].address);
		printf("Enter phone:");
		gets(emp[i].phone);
	}
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(strcmp(emp[j].name,emp[j+1].name)>0)
			{
				temp=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp;
			}
	for(i=0;i<n;i++)
	{
		puts(emp[i].name);
		puts(emp[i].address);
		puts(emp[i].phone);
	}		
	getch();
	return 0;
}

/*
Enter number of employees:3
Enter name:Jack
Enter address:Balaju
Enter phone:01-4218911
Enter name:John
Enter address:Balkumari
Enter phone:01-4328912
Enter name:Brock
Enter address:Kalanki
Enter phone:01-4125821
Brock
Kalanki
01-4125821
Jack
Balaju
01-4218911
John
Balkumari
01-4238912
*/