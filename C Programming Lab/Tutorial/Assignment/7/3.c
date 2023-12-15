#include<stdio.h>
#include<conio.h>

struct employee
{
	char name[10];
	int salary;
};

int main()
{
	int i,j,n;
	struct employee emp[10],temp;
	clrscr();
	printf("Enter number of employees:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name of employee %d:",i+1);
		fflush(stdin);
		gets(emp[i].name);
		printf("Enter salary of employee %d:",i+1);
		scanf("%d",&emp[i].salary);
	}
	for(i=0;i<n;i++)
		for(j=0;i<n-1;j++)
			if(emp[j].salary>emp[j+1].salary)
			{
				temp=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp;
			}
	printf("Employee list on the basis of salary:\n");
	printf("Name\tSalary\n");
	for(i=0;i<n;i++)
		
		printf("%d",emp[i].salary);
	getch();
	return 0;
}