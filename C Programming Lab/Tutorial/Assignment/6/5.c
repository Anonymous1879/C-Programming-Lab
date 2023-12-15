#include <stdio.h>
#include<conio.h>

int fib(int);

int main()
{
	int n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	printf("%dth term of fibonacci series is %d",n,fib(n));
	getch();
	return 0;
}

int fib(int x)
{
	if(x==1)
	{
		return 0;
	}
	else if(x==2)
	{
		return 1;
	}
	else
	{
		return fib (x - 1) + fib (x - 2);
	}
}


/*
O/P:
Enter a number:15
15th term of fibonacci series is 377
*/