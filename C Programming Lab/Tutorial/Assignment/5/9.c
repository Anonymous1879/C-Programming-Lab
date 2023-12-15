#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,n;
	float sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=pow(-1,(i+1))*i/(i+1);
	printf("Sum is %.2f",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Sum is 0.62
*/