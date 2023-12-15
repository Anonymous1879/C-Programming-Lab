#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,sum=0,temp=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
			temp+=j;
		sum+=temp;
	printf("Sum is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:10
Sum is 220
*/