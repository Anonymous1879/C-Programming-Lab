#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i;
	char string[10],copy[10];
	clrscr();
	printf("Enter a string:");
	gets(string);
	strcpy(copy,string);
	puts(copy);
	getch();
	return 0;
}

/*
O/P:
Enter a string:String
String
*/