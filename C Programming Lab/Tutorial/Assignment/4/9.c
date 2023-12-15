#include<stdio.h>
#include<conio.h>

int main()
{
	int n,sum=0;
	char ch;
	clrscr();
	do{
		printf("Enter a number:");
		scanf("%d",&n);
		sum+=n;
		printf("Do you want to continue(Y/N)?:");
		scanf(" %c",&ch);
	}while(ch=='Y');
	printf("Sum is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter two numbers:
5
Do you want to continue(Y/N)?:Y
10
Do you want to continue(Y/N)?:N
Sum is 15
*/