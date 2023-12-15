#include<stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
	float a,b,c,s,area;
	clrscr();
	printf("Enter length of three sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is %.2f",area);
	getch();
	return 0;
}

/*
O/P:
Enter length of three sides of triangle:5 7 4
Area of triangle is 9.80
*/