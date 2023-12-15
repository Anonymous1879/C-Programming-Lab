#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	double c=123.55667788;
	char str[]="I enjoy programming";
	scanf("%3d%2d",&a,&b);
	printf("a=%5\nb=%-7d",a,b);//with and without d in %5
	printf("\n%10.7s",str);
	printf("\n%0.3f",c);
	printf("\n%-10.6f",c);
	getch();
	return 0;
}

/*
O/P:
986348
a=%5
b=%-7d
   I enjoy
123.557
123.556678
*/