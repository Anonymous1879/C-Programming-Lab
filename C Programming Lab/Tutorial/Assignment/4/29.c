#include <stdio.h>
#include <conio.h>

int main()
{
    int n1,n2,c=0,i,j;
    clrscr();
    printf("Enter range:");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        for(j=1;j<=i;j++)
            if(i%j==0)
                c+=1;
        if(c==2)
        printf("%d\t",i);
        c=0;
    }
    getch();
    return 0;
}

/*
O/P:
Enter range:1 15
2   3   5   7   11  13
*/