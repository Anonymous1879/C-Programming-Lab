#include<stdio.h>
#include<conio.h>

void sub(int,int);

int main()
{
	int a,b;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sub(a,b);
	getch();
	return 0;
}

void sub(int x,int y)
{
	printf("Difference is %d",x-y);
}

/*
O/P:
Enter two numbers:1 3
Difference is -2
*/