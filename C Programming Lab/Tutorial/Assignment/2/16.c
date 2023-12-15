#include<stdio.h>
#include<conio.h>
#include<math.h>

#define pi 3.14

int main()
{
	float r,area;
	clrscr();
	printf("Enter radius:");
	scanf("%f",&r);
	area = pi*pow(r,2);
	printf("Area of circle is %.2f",area);
	getch();
	return 0;
}

/*
O/P:
Enter radius:15.7
Area of circle is 773.98
*/