#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,hcf,lcm,i;
    clrscr();
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        	hcf = i;
    }
    lcm=(a*b)/hcf;
    printf("LCM : %d\nHCF: %d",lcm,hcf);
    getch();
    return 0;
}

/*
O/P:
Enter two numbers:55 70
LCM : 770
HCF: 5
*/