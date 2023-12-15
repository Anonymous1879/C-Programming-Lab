#include<stdio.h>
#include<conio.h>

#define MAX 5

int main()
{
	int casen[MAX]={2,3,5,4,10},i,sum=0;
	float average;
	for(i=0;i<MAX;i+=1)
	{
		printf("Case %d=%3.2d\n",i,casen[i]);
		sum+=casen[i];
	}
	average=(float)sum/MAX;
	printf("%06.2f",average);
	return 1;
}

/*
O/P:
Case 0= 02
Case 1= 03
Case 2= 05
Case 3= 04
Case 4= 10
004.80
*/