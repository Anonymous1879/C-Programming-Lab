#include<stdio.h>
#include<conio.h>

int main()
{
	int a,fact,sum=0,temp,n,i;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		n=a%10;
		fact=1;
		for(i=1;i<=n;i++)
			fact=fact*i;
		sum=sum+fact;
		a=a/10;
	}
	if(temp==sum)
		printf("%d is a strong number",temp);
	else
		printf("%d is not a strong number",temp);
	getch();
	return 0;
}

/*
O/P:
Enter a number:145
145 is a strong number
*/