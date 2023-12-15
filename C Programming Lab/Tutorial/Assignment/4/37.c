#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,i,j,sum=0;
	clrscr();
	printf("Enter range:\n");
	scanf("%d%d",&a,&b);
	printf("Triangular numbers:\n");
	for(i=a;i<b;i++)
	{
		sum=0;
		for(j=0;j<=i;j++)
		{
			sum+=j;	
			if(sum==i)
	        	printf("%d \t",i);
	    }
	}
	getch();
	return 0;
}

/*
O/P:
Enter range:
1 50
Triangular numbers:
1 	3 	6 	10 	15 	21 	28 	36 	45 	
*/