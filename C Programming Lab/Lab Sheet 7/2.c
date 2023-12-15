#include<stdio.h>
#include<conio.h>

void concat(char[],char[]);

int main()
{
	char a[10],b[10];
	clrscr();
	printf("Enter two strings:\n"); 
	gets(a);
	gets(b);
	concat(a,b);
	getch();
	return 0;
}

void concat(char a[10],char b[10])
{
	int i,j;
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i=i+1;
	}
	a[i]='\0';
	puts(a);
}

/*
O/P:
Enter two strings:
Lab
sheet
Labsheet
*/