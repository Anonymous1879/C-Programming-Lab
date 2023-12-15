#include<stdio.h>
#include<conio.h>

int main()
{
	int a=0,i;
	char ch;
	for(i=0;i<4;i++)
	{
		ch=getche();
		clrscr();
		a=a*10+(ch-48);
		ch=(char)a;
		printf("\n%c",ch);
	}
	printf("%d",a);
	getch();
	return 0;
}