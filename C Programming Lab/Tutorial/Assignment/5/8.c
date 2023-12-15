#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,j,n,fact;
	float sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
			fact=fact*j;
		sum+=(pow(i,i)/fact);
	}
	printf("Sum is %.2f",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Sum is 44.21
*/