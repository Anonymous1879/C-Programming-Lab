#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=i;j<4;j++)
			printf(" ");
		if(i==0)
		{
			printf("1\n");
			goto label;
		}
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=i;j>=1;j--)
			printf("%d",j);
		printf("\n");
		label:
		
	}
	getch();
	return 0;
}