#include<stdio.h>
#include<conio.h>

int main()
{
	int a,sum=0;
	clrscr();
	printf("Enter a 4-digit number:");
	scanf("%d",&a);
	while(a!=0)
	{
		sum=sum+(a%10);
		a=a/10;
	}
	printf("The sum of digits is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a 4-digit number:1879
The sum of digits is 25
*/