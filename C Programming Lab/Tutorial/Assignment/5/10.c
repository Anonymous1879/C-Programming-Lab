#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,x=1,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		sum+=x;
		if(i%2==0)
			x=x*3/2;
		else
			x*=2;
	}
	printf("Sum is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:10
Sum is 363
*/