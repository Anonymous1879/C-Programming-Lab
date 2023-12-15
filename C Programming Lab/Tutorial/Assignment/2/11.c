#include<stdio.h>
#include<conio.h>

int main()
{
	int p,r;
	clrscr();
	printf("Enter cost of pen in paisa:");
	scanf("%d",&p);
	r=p/100;
	p=p%10;
	printf("Cost of pen is %d rupee and %d paisa.",r,p);
	getch();
	return 0;
}

/*
O/P:
Enter cost of pen in paisa:187
Cost of pen is 1 rupee and 87 paisa.
*/