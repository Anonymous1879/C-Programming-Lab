#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct author
{
	char name[20],nationality[20];
	int NOB;
};

int main()
{
	FILE *fp;
	char ch;
	int n,count=0;
	struct author A;
	clrscr();
	fp=fopen("LIB.TXT","w");
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
		gets(A.name);
		printf("Enter nationality:");
		gets(A.nationality);
		printf("Enter number of books published:");
		scanf("%d",&A.NOB);
		fwrite(&A,sizeof(A),1,fp);
		printf("Do you want to continue?:");
		ch=getch();
	}
	while(ch=='Y'||ch=='y');

	fclose(fp);
	fp=fopen("LIB.TXT","r");
	if(fp==NULL)
	{
		printf("\nFile not found\n");
		exit(0);
	}
	else
		printf("File found\n");
	printf("Enter record number:");
	scanf("%d",&n);
	while((fread(&A,sizeof(A),1,fp))==1)
    {
        count+=1;
        if(count==n)
            printf("Name:%s\nNationality:%s\nNo of books:%d",A.name,A.nationality,A.NOB);
    }
	fclose(fp);
	getch();
	return 0;
}

/*
O/P:
Enter name:Agatha Christie
Enter nationality:British
Enter number of books published:15
Do you want to continue?:
Enter name:Dante Alighieri
Enter nationality:Italian
Enter number of books published:3
Do you want to continue?:
Enter name:Stephen King
Enter nationality:American
Enter number of books published:30
Do you want to continue?:
File found
Enter record number:2
Name:Dante Alighieri
Nationality:Italian
No of books:3
*/
