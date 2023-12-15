#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,words=1;
	char string[50];
	clrscr();
	printf("Enter a sentence:\n");
	gets(string);
	for(i=0;string[i]!='\0';i++)
		if(string[i]==' ')
			words++;
	printf("Number of\nWords:%d\nCharacters:%d",words,i);
	getch();
	return 0;
}

/*
O/P:
Enter a sentence:
The quick brown fox jumped over the lazy dog
Number of
Words:9
Characters:44
*/