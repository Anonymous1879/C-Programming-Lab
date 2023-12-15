#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
    char ch;
	clrscr();
	fp=fopen("file.txt","w");
	if(fp=NULL)
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
	fp=fopen("file.txt","r");
	if(fp=NULL)
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
