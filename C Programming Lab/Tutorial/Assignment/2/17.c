#include<stdio.h>
#include<conio.h>

int main()
{
	float x, y;
	clrscr();
	printf("Enter a number,x:");
	scanf("%f",&x);
	y=(x>2)?(3*x-5):(2.4*x+3);
	printf("y=%.2f",y);
	getch();
	return 0;
}

/*
O/P:
Enter a number,x:-7
y=-13.80
*/