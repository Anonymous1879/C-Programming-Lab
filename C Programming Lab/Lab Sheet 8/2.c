#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],n,i,j,temp;
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
		for(j=i+1;j<n;j++)
		{
		    if(*(ptr+i)>*(ptr+j))
		    {
		        temp=*(ptr+j);
		        *(ptr+j)=*(ptr+i);
		        *(ptr+i)=temp;
		    }
		}
	}
	printf("Sorted aray:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",*ptr);
	    ptr++;
	}
	getch();
	return 0;
}

/*
O/P:
Enter size of array:4
Enter element 1:23
Enter element 2:41
Enter element 3:12
Enter element 4:98
Sorted array:
12
23
41
98
*/