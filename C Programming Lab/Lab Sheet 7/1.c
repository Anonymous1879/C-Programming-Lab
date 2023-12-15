#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	char string[10],copy[10];
	clrscr();
	printf("Enter a string:");
	gets(string);
	for (i = 0; string[i]!='\0'; i++)
	{
		copy[i]=string[i];
	}
	copy[i]='\0';
	puts(copy);
	getch();
	return 0;
}

/*
O/P:
Enter a string:Lab Sheet 7
Lab Sheet 7
*/