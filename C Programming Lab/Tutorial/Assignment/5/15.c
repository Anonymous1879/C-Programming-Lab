#include<stdio.h>
#include<conio.h>
#include<math.h>

#define pi 3.14

int main()
{
	int i,j,x,fact,k=1;
	float rad,sum=1;
	clrscr();
	printf("Enter degree:");
	scanf("%d",&x);
	rad=x*pi/180;
	for(i=2;i<=10;i+=2)
	{
		fact=1;
		for(j=1;j<=i;j++)
			fact=fact*j;
		sum+=pow(-1,k)*pow(rad,i)/fact;
		k++;
	}
	printf("cos(%d) is %.2f",x,sum);
	getch();
	return 0;
}

/*
O/P:
Enter degree:60
cos(60) is 0.50
*/