//WAP To sort each element inside each string

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k,l;
	char a[10][10],temp;
	clrscr();
	printf("Enter number of words:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		gets(a[i]);
	for(i=0;i<=n;i++)
	{
		for(j=0;a[i][j]!='\0';j++);
			for(k=0;k<j;k++)
				for(l=0;l<j-1;l++)
					if(a[i][l]>a[i][l+1])
					{
						temp=a[i][l];
						a[i][l]=a[i][l+1];
						a[i][l+1]=temp;
					}
	}
	for(i=0;i<=n;i++)
		puts(a[i]);
	getch();
	return 0;
}

/*
O/P:
Enter number of words:4
hello
ram
shyam
hair

ehllo
amr
ahmsy
ahir
*/