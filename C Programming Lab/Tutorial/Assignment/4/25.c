#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,r,n,sum=0,temp;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		r=a%10;
		sum=sum+pow(r,3);
		a=a/10;
	}
	if(temp==sum)
		printf("%d is an armstrong number",temp);
	else
		printf("%d is not an armstrong number",temp);
	getch();
	return 0;
}

/*
O/P:
Enter a number:153
153 is an armstrong number
*/