#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	clrscr();
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("a is largest");
	else if(b>a&&b>c)
		printf("b is largest");
	else
		printf("c is largest");
	getch();
	return 0;
}

/*
O/P:
Enter three numbers:
5
10
8
b is largest
*/