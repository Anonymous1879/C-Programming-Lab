#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
	char name[20],address[20];
	int roll,mark;
};

int main()
{
	FILE *fp;
	int i,h=0;
	struct student S[48];
	//clrscr();
	fp=fopen("STUDENT.BIN","wb");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File created successfully\n");
	for(i=0;i<48;i++)
	{
		printf("Enter name:");
		fflush(stdin);
		gets(S[i].name);
		printf("Enter roll:");
		scanf("%d",&S[i].roll);
		printf("Enter address:");
		fflush(stdin);
		gets(S[i].address);
		printf("Enter marks:");
		scanf("%d",&S[i].mark);
	}
	fwrite(&S,sizeof(S),1,fp);
	fclose(fp);
	fp=fopen("STUDENT.BIN","rb");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File found\n");
	fread(&S,sizeof(S),1,fp);
	for(i=0;i<48;i++)
	{
		if(h<S[i].mark)
			h=S[i].mark;
	}
	fread(&S,sizeof(S),1,fp);
	for(i=0;i<48;i++)
		if(h==S[i].mark)
			printf("Name:%s\nRoll No.%d\nAddress:%s\nMarks:%d",S[i].name,S[i].roll,S[i].address,S[i].mark);
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
Enter name:Kurt
Enter roll:12
Enter address:Kumaripati
Enter marks:50
Enter name:Lemmy
Enter roll:13
Enter address:Satdobato
Enter marks:25
.
.
.
File found
Name:Kurt
Roll No.12
Address:Kumaripati
Marks:50
*/
