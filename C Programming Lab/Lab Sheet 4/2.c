#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c=0,i,j;
    clrscr();
    printf("Enter range:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        printf("\t%d",i);
        c=0;
    }
    getch();
    return 0;
}

/*
O/P:
Enter range:1 10
2   3   5   7
*/