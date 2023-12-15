#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,i,n1,n2,r,sum=0;
	clrscr();
	printf("Enter range:");
	scanf("%d%d",&n1,&n2);
	printf("Armstrong numbers:\n");
	for(i=n1;i<n2;i++)
	{
		a=i;
		sum=0;
		while(a!=0)
		{
			r=a%10;
			sum=sum+pow(r,3);
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
Enter range:1 500
Armstrong numbers:
1	153	370	371	407
*/