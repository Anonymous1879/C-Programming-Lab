#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i,sum=0;
	int *ptr=a;
	float average;
	clrscr();
	printf("Enter marks of 10 students:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr+i));
		sum+=*(ptr+i);
	}
	average=sum/10.0;
	printf("Average marks:%.2f",average);
	getch();
	return 0;
}

/*
O/P:
Enter marks of 10 students:
55 78 93 31 57 83 54 12 90 10
Average marks:56.30
*/ 