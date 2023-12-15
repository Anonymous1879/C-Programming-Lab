#include<stdio.h>
#include<conio.h>

int main()
{
	float units,bill=0;
	clrscr();
	printf("Enter number of units:");
	scanf("%f",&units);
	if(units>20)
	{
		if(units>120)
		{
			bill=(units-120)*9;
			units=120;
		}
		bill=bill+ 7.3*(units-20)+(80*20);
	}
	else
		bill=units*80;
	printf("The monthly electric bill is %.2f",bill);
	getch();
	return 0;
}

/*
O/P:
Enter number of units:115
The monthly electric bill is 2293.50
*/