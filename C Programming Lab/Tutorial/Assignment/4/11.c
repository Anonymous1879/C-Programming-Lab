#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	char ch;
	clrscr();
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Enter operation(+,-,*,/,%):");
	scanf(" %c",&ch);
	switch(ch)
	{
		case'+':
				printf("Sum is %d",a+b);
				break;
		case'-':
				printf("Difference is %d",a-b);
				break;
		case'*':
				printf("Product is %d",a*b);
				break;
		case'/':
				printf("Quotiet is %.2f",(float)a/b);
				break;
		case'%':
				printf("Remainder is %d",a%b);
				break;
		default:
				printf("Entered invalid choice");
	}
	getch();
	return 0;
}

/*
O/P:
Enter two numbers:
5
7
Enter operation(+,-,*,/,%):-
Difference is -2
*/