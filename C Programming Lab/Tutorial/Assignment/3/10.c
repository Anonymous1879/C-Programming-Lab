#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d\t",j);
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%d\t",j);
		printf("\n");
	}
	getch();
	return 0;
}