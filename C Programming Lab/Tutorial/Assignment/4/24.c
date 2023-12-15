#include<stdio.h>
#include<conio.h>

int main()
{
	int a,rev=0,temp;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		rev=(rev*10)+(a%10);
		a=a/10;
	}
	if(temp==rev)
		printf("%d is a palindrome number",temp);
	else
		printf("%d is not a palindrome number",temp);
	getch();
	return 0;
}

/*
O/P:
Enter a number:12321
12321 is a palindrome number
*/