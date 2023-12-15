//Using while loop
#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,hcf,lcm;
    clrscr();
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    lcm = a*b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    hcf = a;
    lcm = lcm/hcf;
    printf("LCM : %d\nHCF: %d",lcm,hcf);
    getch();
    return 0;
}

/*
O/P:
Enter two numbers:16 80
LCM : 80
HCF: 16
*/