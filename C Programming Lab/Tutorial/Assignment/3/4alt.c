#include<stdio.h>
#include<math.h>

int main()
{
	float root,i=1,sum;
	do
	{
		sum=2*i-1;
		printf("\t%.2f\n",sum);
		i*=5.0/3;
	}
	while(sum<=15);
	root=pow(i,0.5);
	printf("\n%.3f",root);
	return 0;
}

/*
O/P:
1.00
	2.33
	4.56
	8.26
	14.43
	24.72
4.630
*/
