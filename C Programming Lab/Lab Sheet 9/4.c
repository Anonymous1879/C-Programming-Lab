#include<stdio.h>
#include<conio.h>

typedef struct
{
	int real;
	int img;
}complex;

complex add(complex,complex);
complex sub(complex,complex);

int main()
{
	complex a,b,result;
	clrscr();
	printf("Enter real part and imaginary part of \na:");
	scanf("%d%d",&a.real,&a.img);
	printf("\nb:");
	scanf("%d%d",&b.real,&b.img);
	result=add(a,b);
	printf("Sum is %d+%di\n",result.real,result.img);
	result=sub(a,b);
	printf("Difference is %d+%di\n",result.real,result.img);
	getch();
	return 0;	
}

complex add(complex a,complex b)
{
	complex temp;
	temp.real=a.real+b.real;
	temp.img=a.img+b.img;
	return temp;
}

complex sub(complex a,complex b)
{
	complex temp;
	temp.real=a.real-b.real;
	temp.img=a.img-b.img;
	return temp;
}

/*
O/P:
Enter real part and imaginary part of
a:4 5

b:1 3
Sum is 5+8i
Difference is 3+2i
*/