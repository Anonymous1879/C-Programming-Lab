#include<stdio.h>

int main()
{
	int a=2,b=3,c;
	a=(b++)+(++b)+a;//a=3+5+2=10,b=5
	c=a>b?a:b;//c=10
	b=(a++)+(b--)+a;//b=10+5+11=26,a=11
	c=c++*b--;//c=10*26=260,b=25
	printf("a=%d\nb=%d\nc=%d",a,b,c);//a=11,b=25,c=260
	return 0;
}

/*
O/P:
a=11
b=25
c=260
*/

/*
a=4+4+2=10,b=5//precedence
c=10
b=10+5+10=25,a=11
c=10*25=250,b=24
*/
