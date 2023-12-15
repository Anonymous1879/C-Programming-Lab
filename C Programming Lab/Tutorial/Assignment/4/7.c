#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,sum=0;
	char ch;
	clrscr();
	do{
		printf("Enter two numbers:\n");
		scanf("%d%d",&a,&b);
		sum=a+b;
		printf("Sum is %d\n",sum);
		printf("Do you want to continue(Y/N)?:");
		scanf(" %c",&ch);
	}while(ch=='Y');
	getch();
	return 0;
}

/*
O/P:
Enter two numbers:
5
10
Sum is 15
Do you want to continue(Y/N)?:Y
Enter two numbers:
7
9
Sum is 16
Do you want to continue(Y/N)?:N
*/