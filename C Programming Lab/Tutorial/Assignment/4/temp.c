#include<stdio.h>
#include<conio.h>

int main()
{
	int a,i,n1,n2,rev=0;
	clrscr();
	printf("Enter range:");
	scanf("%d%d",&n1,&n2);
	printf("Palindrome numbers:")
	for(i=n1;i<n2;i++)
	{
		a=i;
		while(a!=0)
		{
			rev=(rev*10)+(a%10);
			a=a/10;
		}
		if(rev==i)
			printf("%d\t",i);
	}
	getch();
	return 0;
}

/*
O/P:
Enter range:100 150
101     111     121     131     141
*/