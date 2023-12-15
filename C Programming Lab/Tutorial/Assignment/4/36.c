#include<stdio.h>
#include<conio.h>

int main()
{
	int a,i,j,count;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Prime factors are:\n");
	for(i=1;i<=a;i++)
	{
		count=0;
		if(a%i==0)
			for(j=1;j<=i;j++)
				if(i%j==0)
					count+=1;
		if(count==2)
			printf("%d\t",i);
	}
	getch();
	return 0;
}

/*
O/P:
Enter a number:33
Prime factors are:
3	11
*/