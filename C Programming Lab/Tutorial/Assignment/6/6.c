#include<stdio.h>
#include<conio.h>
#include<math.h>

int arm(int);

int main()
{
	int a,b,i,count=1;
	clrscr();
	printf("Enter range:");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(arm(i)==i)
			printf("Armstrong number %d is %d\n",count++,i);
	}
	getch();
	return 0;
}

int arm(int x)
{
	int s=0,r;
	while(x!=0)
	{
		r=x%10;
		s=s+pow(r,3);
		x=x/10;
	}
	return s;
}

/*
O/P:
Enter range:200 500
Armstrong number 1 is 370
Armstrong number 2 is 371
Armstrong number 3 is 407
*/