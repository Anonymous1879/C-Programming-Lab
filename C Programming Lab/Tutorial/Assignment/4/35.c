#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;	
		if(sum==n)
	    {
	        printf("%d is a triangular number", n);
			break;
	    }
	}
	if(n==(i-1))
		printf("%d is not  a triangular number", n);
	getch();
	return 0;
}

/*
O/P:
Enter a number:45
45 is a triangular number
*/