#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n1,n2,n,a,fact,sum=0;
	clrscr();
	printf("Enter range:");
	scanf("%d%d",&n1,&n2);
	printf("Strong numbers:\n");
	for(i=n1;i<n2;i++)
	{
		a=i;
		sum=0;
		while(a!=0)
		{
			n=a%10;
			fact=1;
			for(j=1;j<=n;j++)
				fact=fact*j;
			sum=sum+fact;
			a=a/10;
		}
		if(sum==i)
			printf("%d\t",i);
	}
	getch();
	return 0;
}

/*
O/P:
Enter range:1 200
Strong numbers:
1	2	145
*/