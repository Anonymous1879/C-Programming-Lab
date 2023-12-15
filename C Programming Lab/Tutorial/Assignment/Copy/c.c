#include<stdio.h>
#include<conio.h>

int main()
{
	char ch='G';
	int g=10;
	float gravity = 9.81;
	printf("%%d%%f\n");
	printf("%10d\n",g);
	printf("%3c\n",ch);
	printf("%3f\n",gravity);
	printf("%-10.1f%d\n",gravity,g);
	getch();
	return 0;
}

/*
O/P:
%d%f
        10
  G
9.810000
9.8       10
*/
