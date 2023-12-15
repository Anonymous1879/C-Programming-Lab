#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%5==0)
    {
        if(a%7==0)
        {
            if(a%11!=0)
            {
                printf("Number is a multiple of 5, divisible by 7 but not by 11");
            }
            else
            {
                printf("Number is a multiple of 5, divisible by 7 and 11");
            }
        }
        else
        {
            printf("Number is a multiple of 5, but not divisible by 7");
        }
    }
    else
    {
        if(a%7==0)
        {
            if(a%11!=0)
            {
                printf("Number is not a multiple of 5, divisible by 7 but not by 11");
            }
            else
            {
                printf("Number is not a multiple of 5, divisible by 7 and 11");
            }
        }
        else
        {
            printf("Number is not a multiple of 5 and not divisble by 7");
        }
    }
    getch();
    return 0;
}


/*
O/P:
Enter a number:35
Number is multiple of 5, divisible by 7 but not by 11
*/