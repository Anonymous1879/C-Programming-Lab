#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i,j,temp;
	clrscr();
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
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
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	return 0;
}

/*
O/P:
Enter 10 numbers:
124
12
3
5
456
24
7
4345
567
34
3       5       7       12      24      34      124     456     567      4345
*/