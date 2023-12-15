#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a=0,b=1,c,i;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    getch();
    return 0;
}

/*
O/P:
Enter a number:10
0  1  1  2   3   5   8   13  21  34
*/