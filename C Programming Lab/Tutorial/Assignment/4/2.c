#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
		printf("Positive");
	else if(n<0)
		printf("Negative");
	else
		printf("Zero");
	getch();
	return 0;
}

/*
O/P:
Enter a number:-5
Negative
*/