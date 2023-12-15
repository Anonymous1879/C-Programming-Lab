#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    long int a,i=0,d=0;
    clrscr();
    printf("Enter a binary number:");
    scanf("%ld",&a);
    while(a!=0)
    {
        d=d+(a%10)*pow(2,i);
        i=i+1;
        a=a/10;
    }
    printf("Converted decimal form:%ld",d);
    getch();
    return 0;
}

/*
O/P:
Enter a binary number:101101
Converted decimal form:45
*/
