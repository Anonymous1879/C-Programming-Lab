#include <stdio.h>
#include<conio.h>

int sum(int);

int main()
{
	int n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Sum is %d",sum(n));
	getch();
	return 0;
}

int sum(int x)
{
	if(x==0)
		return 0;
	else
		return (x+10*sum(x-1));
}

/*
O/P:
Enter a number:5
Sum is 12345
*/