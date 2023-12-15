#include<stdio.h>
#include<conio.h>

void input();
void add(int [][10],int [][10],int,int);
void display(int [][10],int,int);

int main()
{
	input();
	getch();
	return 0;
}

void input()
{
	int a[10][10],b[10][10],m,n,i,j;
	printf("Enter order of matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter elements of matrix 1:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter elements of matrix 2:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	add(a,b,m,n);
}

void add(int a[10][10],int b[10][10],int m,int n)
{
	int i,j,result[10][10];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			result[i][j]=a[i][j]+b[i][j];
	display(result,m,n);
}

void display(int res[10][10],int m,int n)
{
	int i,j;
	printf("Sum of matrices:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",res[i][j]);
		printf("\n");
	}
}