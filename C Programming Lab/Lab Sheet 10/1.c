#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("filec.txt","w");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File created successfully\n");
	printf("Enter characters:");
	while((ch=getchar())!='\n')
		fputc(ch,fp);
	fclose(fp);
	fp=fopen("filec.txt","r");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File found\n");
	printf("Characters:\n");
	while((ch=fgetc(fp))!=EOF)
        putchar(ch);
	fclose(fp);
	getch();
	return 0;
}

/*
O/P:
Enter characters:abcdef
File found
Characters:
abcdef
*/