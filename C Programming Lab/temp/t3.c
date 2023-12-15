#include<stdio.h>
#include<conio.h>

void displaya(int X,int count)
{
	int i;
	clrscr();
	printf("\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n|");
	printf("%d",X);
	for(i=0;i<count;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n");
	printf("| 7 | 8 | 9 | R | C |\n| 4 | 5 | 6 | X | / |\n| 1 | 2 | 3 | + | - |");
}

void displaych(int x,char ch,int count)
{
	int i;
	clrscr();
	printf("\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n|");
	printf("%d%c",x,ch);
	for(i=0;i<count;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n");
	printf("| 7 | 8 | 9 | R | C |\n| 4 | 5 | 6 | X | / |\n| 1 | 2 | 3 | + | - |");
}
void displayb(int x,char ch,int y,int count)
{
	int i;
	clrscr();
	printf("\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n|");
	printf("%d%c%d",x,ch,y);
	for(i=0;i<count;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n");
	printf("| 7 | 8 | 9 | R | C |\n| 4 | 5 | 6 | X | / |\n| 1 | 2 | 3 | + | - |");
}

int main()
{
	char ch,operator;
	int i,count=18,a=0,b=0;
	displaya(0,18);
	while ((ch = getche()) >= '0' && ch <= '9')
	{
		a=a*10+(ch-48);
		printf("%d",a);
    	displaya(a,count--);
    	printf("\n");
    }
    operator=ch;
    displaych(a,ch,count--);
    pritnf("\n");
    while ((ch = getche())!= '=')
	{
		b=b*10+(ch-48);
		printf("%d",a);
    	displayb(a,operator,b,count--);
    	printf("\n");
    }
    
	getch();

	return 0;
}