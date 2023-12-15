#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n,i,r,a=-10;
    clrscr();
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("%d",a);
    for(i=1;i<n;i++)
    {
        r=a-pow(2,i);
        printf("\t%d",r);
    }
    getch();
    return 0;
}

/*
O/P:
Enter number of terms:8
-10	-12	-14	-18	-26	-42	-74	-138
*/