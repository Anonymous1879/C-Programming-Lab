#include<stdio.h>
#include <conio.h>

struct time
{
	int hrs;
	int min;
	int sec;
};

int main()
{
	struct time p,c,diff;
	clrscr();
	printf("Enter previous time(hrs:min:sec):");
	scanf("%d:%d:%d",&p.hrs,&p.min,&p.sec);
	printf("Enter current time(hrs:min:sec):");
	scanf("%d:%d:%d",&c.hrs,&c.min,&c.sec);

	if(p.sec>c.sec)
	{
		c.min--;
		c.sec+=60;
	}
	if(p.min>c.min)
	{
		c.hrs--;
		c.min+=60;
	}
	diff.sec=c.sec-p.sec;
	diff.min=c.min-p.min;
	diff.hrs=c.hrs-p.hrs;
	printf("Difference:%dhrs,%dmin,%dsec",diff.hrs,diff.min,diff.sec);
	getch();
	return 0;
}

/*
O/P:
Enter previous time(hrs:min:sec):1:30:15
Enter current time(hrs:min:sec):2:15:35
Difference:0hrs,45min,20sec
*/