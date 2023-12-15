#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct date
{
	int year;
	int month;
	int day;
};

struct student
{
	char name[20];
	int class,id,fee,credit,attendance;
	struct date DOB,Enroll;
};

void display()
{
	int a;
	pritnf("1.Add record\n2.View record\n3.Edit record\n4.Check for grant");
	scanf("%d",&a);
	switch(a)
	{
	case 1:add();
		break;
	case 2:view();
		break;
	case 3:edit();
		break;
	case 4:check();
		break;
	default:printf("Invalid Input");
	}
};

void add()
{
	struct student S;
	FILE *fp;
	char ch;
	fp=fopen("REG.TXT","a");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File created successfully\n");
	do
	{
		printf("\nEnter name:");
		fflush(stdin);
		gets(S.name);
		printf("Enter class:");
		gets(S.class);
		printf("Enter id number:");
		printf("Enter date of birth(YYYY/MM/DD)");
		scanf("%d//%d//%d",&S.DOB.year,&S.DOB.month,&S.DOB.day);
		scanf("%d",&S.id);
		printf("Enter fee:");
		scanf("%d",&S.fee);
		printf("Enter credit score:");
		scanf("%d",&S.credit);
		printf("Enter attendance percentage:");
		scanf("%d",&S.attendance);
		printf("Enter date of enrollment(YYYY/MM/DD)");
		scanf("%d//%d//%d",&S.Enroll.year,&S.Enroll.month,&S.Enroll.day);
		fwrite(&S,sizeof(S),1,fp);
		printf("Do you want to continue?:");
		ch=getch();
	}
	while(ch=='Y'||ch=='y');
	fclose(fp);
	display();
};

void view()
{
	FILE *fp;
	char name[20];
	int datafound=0;
	fp=fopen("REG.TXT","r");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File found\n");
	printf("Enter name:");
	gets(name);
	while((fread(&S,sizeof(S),1,fp))==1)
    {
        if(strcmp(S.name,name)==0)
        {
        	datafound=1;
            printf("Name:%s\nNationality:%s\nNo of books:%d",S.name,S.nationality,S.NOB);
        }

    }
    if(datafound==0)
    	printf("No record");
    display();
}

void edit()
{
	
}

	do
	{
		printf("\nEnter name:");
		fflush(stdin);
		gets(S.name);
		printf("Enter nationality:");
		gets(S.nationality);
		printf("Enter number of books published:");
		scanf("%d",&S.NOB);
		fwrite(&S,sizeof(S),1,fp);
		printf("Do you want to continue?:");
		ch=getch();
	}
	while(ch=='Y'||ch=='y');

	fclose(fp);
	fp=fopen("FILE.TXT","r");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File found\n");
	printf("Enter record number:");
	scanf("%d",&n);
	while((fread(&S,sizeof(S),1,fp))==1)
    {
        count+=1;
        if(count==n)
            printf("Name:%s\nNationality:%s\nNo of books:%d",S.name,S.nationality,S.NOB);
    }
	fclose(fp);
	//getch();
	return 0;
}

int main()
{
	int a;
	printf("\tWelcome to Student Management System");
	printf("\n------------------------------------\n");
	printf("\tManage students with ease\n");
	printf("Hi there, chose one to manage student\n");
	display();
	return 0;
}

/*
O/P:

*/

