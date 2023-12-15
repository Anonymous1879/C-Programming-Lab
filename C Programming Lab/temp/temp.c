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
	struct student S;
	//clrscr();
	fp=fopen("STUDENT.BIN","wb");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File created successfully\n");
	for(i=0;i<3;i++)
	{
		printf("Enter name:");
		fflush(stdin);
		gets(S.name);
		printf("Enter roll:");
		scanf("%d",&S.roll);
		printf("Enter address:");
		fflush(stdin);
		gets(S.address);
		printf("Enter marks:");
		scanf("%d",&S.mark);
	    fwrite(&S,sizeof(S),1,fp);
	}

	fclose(fp);
	fp=fopen("STUDENT.BIN","rb");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	else
		printf("File found\n");
	//fread(&S,sizeof(S),1,fp);
	for(i=0;i<3;i++)
	{
	    fread(&S,sizeof(S),1,fp);
		if(h<S.mark)
			h=S.mark;
    }
	//fread(&S,sizeof(S),1,fp);
	for(i=0;i<3;i++)
	{
        fread(&S,sizeof(S),1,fp);
		if(h==S.mark)
			printf("Name:%s\nRoll No.%d\nAddress:%s\nMarks:%d",S.name,S.roll,S.address,S.mark);
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
