#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,x,y;
    clrscr();
    printf("Enter order of matrix:");
    scanf("%d%d",&x,&y);
    printf("Enter elements of matrix 1:\n");
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of matrix 2:\n");
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
        {
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }
    printf("The resultant matrix is:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

/*
O/P:
Enter order of matrix:2 3
Enter elements of matrix 1:
1
2
3
4
5
6
Enter elements of matrix 2:
7
8
9
1
2
3
The resultant matrix is:
8  9   10
5  7   9