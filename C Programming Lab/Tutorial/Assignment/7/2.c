#include<stdio.h>
#include<conio.h>

struct height
{
	int foot;
	int inch;
};

int main()
{
	struct height s1,s2,diff;
	clrscr();
	printf("Enter height of student 1:");
	scanf("%d%d",&s1.foot,&s1.inch);
	printf("Enter height of student 2:");
	scanf("%d%d",&s2.foot,&s2.inch);
	if(s1.foot>s2.foot)
	{
		diff.foot=s1.foot-s2.foot;
		diff.inch=s1.inch-s2.inch;
	}
	else
	{
		diff.foot=s2.foot-s1.foot;
		diff.inch=s2.inch-s1.inch;
	}
	if(diff.inch<0)
	{
		diff.inch+=12;
		diff.foot--;
	}
	printf("Height Difference:%dfeet %dinch",diff.foot,diff.inch);
	getch();
	return 0;
}

/*
O/P:
Enter height of student 1:1 5
Enter height of student 2:2 10
Height Difference:1feet 5inch
*/