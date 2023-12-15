#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=pow(i,i);
	printf("Sum is %d",sum);
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Sum is 3413
*/