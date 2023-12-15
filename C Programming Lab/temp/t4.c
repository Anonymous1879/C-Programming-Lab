#include<stdio.h>
#include<conio.h>
#include<string.h>

void display(int c,int x,char ch,int y,float res,int len,int count)
{
	int i;
	clrscr();
	printf("\n|");
	for(i=0;i<19;i++)
	printf("-");
	printf("|\n|");
	if(c==1)//display a
		printf("%d",x);
	else if(c==2)//display operator
		printf("%d%c",x,ch);
	else if(c==3||c==4)//display b
		printf("%d%c%d",x,ch,y);
	for(i=0;i<count;i++)
		printf(" ");
	printf("|\n|");
	for(i=0;i<19-len;i++)
		printf(" ");
	if(c==4)
	{
		printf("%.2f",res);
	}
	printf("|\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|\n");
	printf("| 7 | 8 | 9 | R | C |\n| 4 | 5 | 6 | X | / |\n| 1 | 2 | 3 | + | - |\n|");
	for(i=0;i<19;i++)
		printf("-");
	printf("|");
}

int main()
{
	char ch,op,string[10];
	int i,count=18,a=0,b=0,len;
	float r;
	display(0,0,0,0,0,0,19);
	while ((ch = getche()) >= '0' && ch <= '9')//input a
	{
		a=a*10+(ch-48);
		printf("%d",a);
    	display(1,a,0,0,0,0,count--);
    	printf("\n");
    }

    op=ch;//operator
	display(2,a,ch,0,0,0,count--);
    printf("\n");

    while ((ch = getche())!= '=')//input b
	{
		b=b*10+(ch-48);
		printf("%d",a);
		display(3,a,op,b,0,0,count--);
		printf("\n");
    }
	switch(op)
	{
		case'+':
				r=a+b;
				break;
		case'-':
				r=a-b;
				break;
		case'*':
				r=a*b;
				break;
		case'/':
				r=(float)a/b;
				break;
		default:
				printf("Error!");
	}
	sprintf(string,"%.2f",r);
	len=strlen(string);

    display(4,a,op,b,r,len,++count);
	getch();
	return 0;
}