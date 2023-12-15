#include<stdio.h>
#include<conio.h>

int main()
{
	int a,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		sum=sum+(a%10);
		a=a/10;
	}
	printf("Sum of digits is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:1879
Sum of digits is 25
*/