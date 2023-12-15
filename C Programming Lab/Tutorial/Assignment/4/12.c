#include<stdio.h>
#include<conio.h>

int main()
{
	char a;
	clrscr();
	printf("Enter a character:");
	scanf("%c",&a);
	if(a>='A'&&a<='Z')
		a+=32;
	else if(a>='a'&&a<='z')
		a-=32;
	else
		printf("Invalid");
	printf("The converted character is %c",a);
	getch();
	return 0;
}

/*
O/P:
Enter a character:h
The converted character is H
*/