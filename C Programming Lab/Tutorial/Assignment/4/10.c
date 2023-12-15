#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,count=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0)
			count+=1;
	if(count==2)
		printf("Prime");
	else
		printf("Not prime");
	getch();
	return 0;
}

/*
O/P:
Enter a number:5
Prime
*/