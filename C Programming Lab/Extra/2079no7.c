#include <stdio.h>
#include<conio.h>

struct time
{
    int hrs;
    int min;
    int sec;
};

void display(struct time *, struct time *);

int main()
{
    struct time pre, cur;
    clrscr();

    printf("Enter previous time (hrs:min:sec): ");
    scanf("%d:%d:%d", &pre.hrs, &pre.min, &pre.sec);

    printf("Enter current time (hrs:min:sec): ");
    scanf("%d:%d:%d", &cur.hrs, &cur.min, &cur.sec);

    display(&pre, &cur);
    getch();
    return 0;
}

void display(struct time *p, struct time *c)
{
    struct time diff, sum;

    sum.sec = c->sec + p->sec;
    sum.min = c->min + p->min;
    sum.hrs = c->hrs + p->hrs;

    if (sum.sec >= 60)
    {
        sum.min++;
        sum.sec -= 60;
    }
    if (sum.min >= 60)
    {
        sum.hrs++;
        sum.min -= 60;
    }

    if (p->sec > c->sec)
    {
        c->min--;
        c->sec += 60;
    }
    if (p->min > c->min)
    {
        c->hrs--;
        c->min += 60;
    }

    diff.sec = c->sec - p->sec;
    diff.min = c->min - p->min;
    diff.hrs = c->hrs - p->hrs;

    printf("Difference: %dhrs, %dmin, %dsec\n", diff.hrs, diff.min, diff.sec);
    printf("Sum: %dhrs, %dmin, %dsec\n", sum.hrs, sum.min, sum.sec);
}
