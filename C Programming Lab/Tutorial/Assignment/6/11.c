#include<stdio.h>
#include<conio.h>

int main()
{
	int sales[3][3],i,j,item[3]={0,0,0},person[3]={0,0,0};
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter no of sales of product %d of person %d:",j+1,i+1);
			scanf("%d",&sales[i][j]);
			person[i]+=sales[i][j];
			item[j]+=sales[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		printf("Total sales of person %d is %d\n",i+1,person[i]);
		printf("Total sales of product %d is %d\n",i+1,item[i]);
	}
	getch();
	return 0;
}

/*
O/P:
Enter no of sales of product 1 of person 1:1
Enter no of sales of product 2 of person 1:2
Enter no of sales of product 3 of person 1:3
Enter no of sales of product 1 of person 2:4
Enter no of sales of product 2 of person 2:5
Enter no of sales of product 3 of person 2:6
Enter no of sales of product 1 of person 3:2
Enter no of sales of product 2 of person 3:3
Enter no of sales of product 3 of person 3:4
Total sales of person 1 is 6
Total sales of product 1 is 7
Total sales of person 2 is 15
Total sales of product 2 is 10
Total sales of person 3 is 9
Total sales of product 3 is 13
*/