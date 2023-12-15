#include<stdio.h>
#include<conio.h>
#include<string.h>

void read(char [][10]);
void arrange(char [][10]);
void display(char [][10]);

int main()
{
	char a[10][10];
	clrscr();
	read(a);
	arrange(a);
	display(a);
	getch();
	return 0;
}

void read(char a[10][10])
{
	int i;
	printf("Enter 10 words:\n");
	for(i=0;i<10;i++)
		gets(a[i]);
}

void arrange(char a[10][10])
{
	int i,j,diff;
	char temp[10];
	for(i=0;i<10;i++)
		for(j=0;j<9;j++)
		{
			diff =strcmp(a[j],a[j+1]);
			if(diff>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
}

void display(char a[10][10])
{
    int i;
    printf("\nWords in dictionary order:\n");
	for(i=0;i<10;i++)
		puts(a[i]);

}
/*
O/P:
Enter 10 words:
expertise
award
red
random
theater
express
wild
fallen
angels
exile

Words in dictionary order:
angels
award
exile
expertise
express
fallen
random
red
theater
wild
*/