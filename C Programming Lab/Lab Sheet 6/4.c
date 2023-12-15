#include<stdio.h>
#include<conio.h>

void read(int[]);
void sort(int[]);
void display(int[]);

int main()
{
	int a[10];
	clrscr();
	read(a);
	sort(a);
	display(a);
	getch();
	return 0;
}

void read(int a[])
{
	int i;
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}

void sort(int a[])
{
	int i,j,temp;
	for(i=0;i<10;i++)
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}

void display(int a[])
{
	int i;
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
}
/*
O/P:
Enter 10 numbers:
4
5
7
3
56
88
56
34
233
35
3       4       5       7       34      35      56      56      88      233
*/