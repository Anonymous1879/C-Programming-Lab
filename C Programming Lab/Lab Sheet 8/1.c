#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],n,i,sum=0;
	int *ptr=a;
	clrscr();
	printf("Enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=*ptr;
		ptr++;
	}
	printf("Sum is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter size of array:3
Enter element 1:5
Enter element 2:8
Enter element 3:10
Sum is 23
*/