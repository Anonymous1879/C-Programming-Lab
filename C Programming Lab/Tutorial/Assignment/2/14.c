#include<stdio.h>
#include<conio.h>

int main()
{
	float salary,medical,rent,PF,net;
	clrscr();
	printf("Enter basic salary of Ram:");
	scanf("%f",&salary);
	medical=salary/10;
	rent=salary/12.5;
	PF=salary/10;
	net=salary+medical+rent+PF;
	printf("Net salary is %.2f",net);
	getch();
	return 0;
}

/*
O/P:
Enter basic salary of Ram:16500
Net salary is 21120.00
*/