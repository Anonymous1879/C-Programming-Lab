#include<stdio.h>

int main()
{
	int i,a;
	char ch;
	printf("|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n");
	printf("| 7 | 8 | 9 | R | C |\n| 4 | 5 | 6 | X | / |\n| 1 | 2 | 3 | + | - |");
	ch=getche()
	{

		clrscr();
		printf("|");
		for(i=0;i<19;i++)
			printf("-");
		printf("|\n|");
		printf("%c",ch);
		for(i=0;i<18;i++)
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

	return 0;
}