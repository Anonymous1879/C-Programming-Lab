#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
	char name[20],nationality[20];
	int NOB;
};

int main()
{
	FILE *fp;
	char ch;
	int n,count=0;
	struct student S;
	//clrscr();
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
	fp=fopen("LIB.TXT","r");
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

/*
O/P:
File created successfully
Enter name:Jack
Enter roll:10
Enter address:Balaju
Enter marks:15
Enter name:John
Enter roll:11
Enter address:Balkumari
Enter marks:25
Enter name:Kurt
Enter roll:12
Enter address:Kumaripati
Enter marks:50
Enter name:Lemmy
Enter roll:13
Enter address:Satdobato
Enter marks:25
Enter name:Norman
Enter roll:14
Enter address:Kalanki
Enter marks:22
File found
Name:Kurt
Roll No.12
Address:Kumaripati
Marks:50
*/
