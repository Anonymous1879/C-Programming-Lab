#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,*ptra, *ptrb, *ptrc;
    clrscr();
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a,&b,&c);
    
    *ptra= a;
    *ptrb= b;
    *ptrc= c;
    if(*ptra > *ptrb && *ptra > *ptrc)
    {
        printf("Largest is %d", *ptra);
    }
    else if(*ptrb > *ptrc && *ptrb > *ptra)
    {
        printf("Largest is %d", *ptrb);
    }
    else
    {
        printf("Largest is %d", *ptrc);
    }
    getch();
    return 0;
}

/*
O/P:
Enter three numbers:
88
90
76
Largest is 90
*/