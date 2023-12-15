//WAP To check if a string is palindrome or not without using string handling functions

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,j,k=0;
	char a[10];
	clrscr();
	printf("Enter a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	for(j=0;j<=i/2;j++)
	{
		if(a[i-j-1]!=a[j])
			k++;
	}
	if (k==0)
		printf("Palindrome");
	else
		printf ("Not Palindrome");
	getch();
	return 0;
}

/*
O/P:
Enter a string:abba
Palindrome
*/