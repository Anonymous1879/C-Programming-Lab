#include<stdio.h>
#include<conio.h>

int main()
{
	char str1[50],str2[50]={'N','E','P','A','L'};
	scanf("%[A-Z]",str1);// use different variations of a,z
	printf("%s\n",str1);
	printf("%0.5s\n",str2);
	printf("%5.3s\n",str2);
	printf("%-0.3s",str2);
	getch();
	return 0;
}

/*
O/P:
HeLLO
H
NEPAL
  NEP
NEP
*/
