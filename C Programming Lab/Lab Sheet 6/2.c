#include<stdio.h>
#include<conio.h>

int main()
{
	int i,sum=0,a[8]={1,2,3,4,5,6,7,8};
	float avg;
	clrscr();
	for(i=0;i<8;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/8.0;
	printf("Sum is %d\nAverage is %.2f",sum,avg);
	getch();
	return 0;
}

/*
O/P:
Sum is 36
Average is 4.50
*/