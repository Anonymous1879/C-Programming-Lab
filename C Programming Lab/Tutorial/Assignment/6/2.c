#include<stdio.h>
#include<conio.h>

void sum();

int main()
{
	clrscr();
	sum();
	getch();
	return 0;
}

void sum()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Sum is %d",a+b);
}

/*
O/P:
Enter two numbers:1 3
Sum is 4
*/