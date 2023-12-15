#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n,fact,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
			fact=fact*j;
		sum+=(fact/i);
	}
	printf("Sum is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Sum is 34
*/