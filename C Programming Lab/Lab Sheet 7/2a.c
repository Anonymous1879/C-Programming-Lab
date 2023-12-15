#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char a[10],b[10];
	clrscr();
	printf("Enter two strings:\n"); 
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
	getch();
	return 0;
}

/*
O/P:
Enter two strings:
copy/
paste
copy/paste
*/