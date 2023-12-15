#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,cube,sqr;
	clrscr();
	for(i=1;i<=10;i++)
	{
		cube=pow(i,3);
		sqr=pow(i,2);
		printf("Cube of %d is %d\nSquare of %d is %d\n",i,cube,i,sqr);
	}
	getch();
	return 0;
}

/*
O/P:
Cube of 1 is 1
Square of 1 is 1
Cube of 2 is 8
Square of 2 is 4
Cube of 3 is 27
Square of 3 is 9
Cube of 4 is 64
Square of 4 is 16
Cube of 5 is 125
Square of 5 is 25
Cube of 6 is 216
Square of 6 is 36
Cube of 7 is 343
Square of 7 is 49
Cube of 8 is 512
Square of 8 is 64
Cube of 9 is 729
Square of 9 is 81
Cube of 10 is 1000
Square of 10 is 100
*/