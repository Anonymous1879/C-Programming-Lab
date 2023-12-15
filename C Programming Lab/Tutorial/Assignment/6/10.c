#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,len;
	char a[10];
	clrscr();
	printf("Enter a word:");
	gets(a);
	len=strlen(a);
	if(a[0]>='A'&&a[0]<='Z')
	{
		for(i=0;i<len;i++)
			if(a[i]>='A'&&a[i]<='Z')
				a[i]+=32;
	}
	else if(a[0]>='a'&&a[0]<='z')
	{
		for(i=0;i<len;i++)
			if(a[i]>='a'&&a[i]<='z')
				a[i]-=32;
	}
	else
		printf("Invalid");
	puts(a);
	getch();
	return 0;
}

/*
O/P:
Enter a word:hElLo
HELLO
*/