#include<stdio.h>
#include<conio.h>

int main()
{
	int a,rev=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		rev=(rev*10)+(a%10);
		a=a/10;
	}
	printf("Reverse of digits is %d",rev);
	getch();
	return 0;
}

/*
O/P:
Enter a number:1879
Reverse of digits is 9781
*/