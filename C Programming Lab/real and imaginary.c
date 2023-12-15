#include<stdio.h>
//#include<conio.h>
#include<math.h>

int main()
{
    float a,b,c,d,r1,r2;
    //clrscr();
    printf("Enter coefficients of x2,x and constant:");
    scanf("%f %f %f",&a,&b,&c);
    d = pow(b,2)-(4*a*c);
    if(d==0)
    {
        r1=-b/(2*a);
        printf("Both the roost of given quadratic equation is %f",r1);
    }
    else if(d>0)
    {
        r1 = (-b +sqrt(d))/(2*a);
        r2 = (-b -sqrt(d))/(2*a);
        printf("The two real roots of given quadratic equation are %.2f and %.2f",r1,r2);
    }
    else if(d<0)
    {
        r1 = (-b)/(2*a);
        r2 = (sqrt(-d))/(2*a);
        printf("The real and imaginary roots of given quadratic equation are %f + %fi and %f - %fi",r1,r2,r1,r2);
    }
    else
    {
        printf("Invalid Input");
    }
    //getch();
    return 0;
}
