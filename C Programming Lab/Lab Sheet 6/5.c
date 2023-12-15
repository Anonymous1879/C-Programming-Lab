#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],temp,i,j,n;
    clrscr();
    printf("Enter order of square matrix:");
    scanf("%d",&n);
    printf("Enter elements of square matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    temp=a[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(a[i][j]<temp)
                temp=a[i][j];
        }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if((i==j)||(i+j==(n-1)))
                a[i][j]=temp;
        }
    printf("The matrix is:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

/*
O/P:
Enter order of square matrix:3
Enter elements of square matrix:
2
3
4
5
6
7
9
8
5
The matrix is:
2       3       2
5       2       7
2       8       2
*/