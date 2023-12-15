#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=i;
	printf("Sum is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Sum is 15
*/