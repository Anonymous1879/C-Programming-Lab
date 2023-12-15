#include <stdio.h>
#include <conio.h>

int main()
{
    int a,min,max;
    char ch;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&a);
    min=a;
    max=a;
    printf("Do you want to continue(Y/N)?");
    scanf(" %c",&ch);
    while(ch == 'Y')
    {
        printf("Enter a number:");
        scanf("%d",&a);
        if(a<min)
        	min = a;
        if(a>max)
        	max = a;
        printf("Do you want to continue(Y/N)?");
        scanf(" %c",&ch);
    }
    printf("Minimum value : %d\nMaximum value : %d",min,max);
    getch();
    return 0;
}

/*
O/P:
Enter a number:523
Do you want to continue(Y/N)?Y
Enter a number:231
Do you want to continue(Y/N)?Y
Enter a number:65
Do you want to continue(Y/N)?N
Minimum value : 65
Maximum value : 523
*/