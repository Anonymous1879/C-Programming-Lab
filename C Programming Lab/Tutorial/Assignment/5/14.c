#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,j,x,fact;
	float sum=1;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
			fact=fact*j;
		sum+=pow(-1,i)*pow(x,i)/fact;
	}
	printf("e-%d is %.2f",x,sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:1
e-1 is 0.37
*/