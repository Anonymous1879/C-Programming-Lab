#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,j,diff;
	char a[5][10],temp[10];
	clrscr();
	printf("Enter 5 names:\n");
	for(i=0;i<5;i++)
		gets(a[i]);
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{
			diff =strcmp(a[j],a[j+1]);
			if(diff>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
    printf("\nNames in ascending order:\n");
	for(i=0;i<5;i++)
		puts(a[i]);
	getch();
	return 0;
}
/*
O/P:
Enter 5 names:
jack
black
abba
effy
josh

Names in ascending order:
abba
black
effy
jack
josh
*/