#include<stdio.h>
#include<conio.h>

void reverse_array(int *,int);

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
	reverse_array(ptr,n);
	printf("Reversed array:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",*ptr);
	    ptr++;
	}
	getch();
	return 0;
}

void reverse_array(int *ptr,int n)
{
	int i,temp,j=n-1;
	for(i=0;i<n/2;i++)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+j);
		*(ptr+j)=temp;
		j--;
	}

}
/*
O/P:
Enter size of array:4
Enter element 1:23
Enter element 2:41
Enter element 3:12
Enter element 4:98
Reversed array:
98
12
41
23
*/