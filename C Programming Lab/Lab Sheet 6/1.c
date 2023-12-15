#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	float a[10];
	clrscr();
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%.2f\t",a[i]);
	}
	getch();
	return 0;
}

/*
O/P:
Enter 10 numbers:
5.6
3.56
32
13.7
30
98.6
23.6
34.4
231.3
31.3
5.60	3.56	32.00	13.70	30.00	98.60	0.60	34.40	231.30	31.30	
*/