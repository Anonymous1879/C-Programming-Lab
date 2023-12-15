#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n1,n2,sum=0;
	clrscr();
	printf("Enter range:");
	scanf("%d%d",&n1,&n2);
	printf("Perfect numbers:\n");
	for(i=n1;i<n2;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
			if(i%j==0)
				sum=sum+j;
		if(sum==i)
			printf("%d\t",i);
	}
	getch();
	return 0;
}

/*
O/P:
Enter range:1 500
Perfect numbers:
6	28	496
*/
