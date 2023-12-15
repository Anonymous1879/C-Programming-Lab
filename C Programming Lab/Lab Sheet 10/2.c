#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char name[20];
	int roll,age,i;
	clrscr();
	fp=fopen("STUDENT.DAT","w");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File created successfully\n");
	for(i=0;i<5;i++)
	{
		printf("Enter name:");
		fflush(stdin);
		gets(name);
		printf("Enter roll:");
		scanf("%d",&roll);
		printf("Enter age:");
		scanf("%d",&age);
		fprintf(fp,"\n%s\t%d\t%d",name,roll,age);
	}
	fclose(fp);
	fp=fopen("STUDENT.DAT","r");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File found\n");
	printf("Name\tRoll\tAge");
	while((fscanf(fp,"\n%s\t%d\t%d",name,&roll,&age))!=EOF)
        printf("\n%s\t%d\t%d",name,roll,age);
	fclose(fp);
	getch();
	return 0;
}

/*
O/P:
File created successfully
Enter name:Jack
Enter roll:10
Enter age:17
Enter name:John
Enter roll:11
Enter age:18
Enter name:Kurt
Enter roll:12
Enter age:17
Enter name:Lemmy
Enter roll:13
Enter age:17
Enter name:Norman
Enter roll:14
Enter age:18
File found
Name	Roll	Age
Jack	10		17
John	11		18
Kurt	12		17
Lemmy	13		17
Norman	14		18
*/