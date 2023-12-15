#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i;
	char a[50];
	clrscr();
	printf("Enter a sentence:\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
		if(a[i]=='t'&&a[i+1]=='h'&&a[i+2]=='e')
		{
			a[i]='*';
			a[i+1]='*';
			a[i+2]='*';
		}
		puts(a);
		getch();
		return 0;
}

/*
O/P:
Enter a sentence:
Adjust the thermostat
Adjust *** ***rmostat
*/