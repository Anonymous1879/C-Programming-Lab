#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		if(n%i==0)
			sum=sum+i;
	if(n==sum)
		printf("%d is a perfect number",n);
	else
		printf("%d is not a perfect number",n);
	getch();
	return 0;
}

/*
O/P:
Enter a number:496
496 is a perfect number
*/