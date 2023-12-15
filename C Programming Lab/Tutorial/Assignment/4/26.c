#include<stdio.h>
#include<conio.h>

int main()
{
    long int a,b=0,c=1;
    clrscr();
    printf("Enter a number:");
    scanf("%ld",&a);
    while(a!=0)
    {
        b=b+(a%2)*c;
        c=c*10;
        a=a/2;
    }
    printf("Converted binary form: %ld",b);
    getch();
    return 0;
}

/*
O/P:
Enter a number:55
Converted binary form: 110111
*/