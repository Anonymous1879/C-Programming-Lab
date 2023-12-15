#include<stdio.h>
#include<conio.h>

int main()
{
	int percent;
	clrscr();
	printf("Enter percentage:");
	scanf("%d",&percent);
	if(percent>=80)
		printf("Distinction");
	else if(percent<80&&percent>=60)
		printf("First Division");
	else if(percent<60&&percent>=45)
		printf("Second Division");
	else if(percent<45&&percent>=32)
		printf("Third Division");
	else
		printf("Fail");
	getch();
	return 0;
}

/*
O/P:
Enter percentage:35
Third Division
*/