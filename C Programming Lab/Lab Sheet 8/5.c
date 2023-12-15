#include<stdio.h>
#include<conio.h>

void swap(int *,int *);

int main()
{
    int a,b;
    clrscr();
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Swapped values:\n%d\t%d",a,b);
	getch();
	return 0;
}

void swap(int *x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
/*
O/P:
Enter two numers:
4
7
Swapped values:
7	4
*/