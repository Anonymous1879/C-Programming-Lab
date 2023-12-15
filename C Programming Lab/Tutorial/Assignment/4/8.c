#include<stdio.h>
#include<conio.h>

int main()
{
	int n=0,sum=0,count=0;
	float avg;
	clrscr();
	do{
	    sum+=n;
		printf("Enter a number:");
		scanf("%d",&n);
		count+=1;
	}while(n>0);
	avg=(float)sum/(count-1);
	printf("Sum is %d\nAverage is %.2f",sum,avg);
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Enter a number:10
Enter a number:-7
Sum is 15
Average is 7.50
*/