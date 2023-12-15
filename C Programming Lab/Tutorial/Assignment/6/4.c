#include<stdio.h>
#include<conio.h>

void swap(int *,int *);

int main()
{
	int a,b;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("Swapped	values are:%d %d",a,b);
	getch();
	return 0;
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

/*
O/P:
Enter two numbers:1 4
Swapped	values are:4 1
*/