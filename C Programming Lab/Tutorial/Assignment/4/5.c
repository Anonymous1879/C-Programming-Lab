#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,fact=1;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fact=fact*i;
	printf("Factorial:%d",fact);
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Factorial:120
*/