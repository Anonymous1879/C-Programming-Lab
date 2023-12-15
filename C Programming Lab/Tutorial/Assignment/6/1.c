#include<stdio.h>
#include<conio.h>

int largest(int []);

int main()
{
	int a[10],i;
	clrscr();
	printf("Enter 10 numbers:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Largest number is %d",largest(a));
	getch();
	return 0;
}

int largest(int x[10])
{
	int i,temp=x[0];
	for(i=0;i<10;i++)
		if(temp<x[i])
			temp=x[i];
	return temp;
}

/*
O/P:
Enter 10 numbers:1 18 90 72 56 28 19 34 78 32
Largest number is 90
*/