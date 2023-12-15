#include<stdio.h>
#include<conio.h>

int main()
{
	int a,sum=0;
	clrscr();
	printf("Enter a 4-digit number:");
	scanf("%d",&a);
	sum = (a/1000)+(a%10);
	printf("Sum of first and last digit is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a 4-digit number:1879
Sum of first and last digit is 10
*/