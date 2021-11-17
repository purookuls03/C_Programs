//WAP in c to find the number and sum of interger between 100 and 200 which are divisble by 9

#include<stdio.h>

void main()
{
	int num,sum=0,i;
	
	for(i=101;i<=200;i++)
	{
		if(i%9==0)
		{
			printf("%d\n", i);
			sum=sum+i;
		
		}
	}

	printf("sum = %d", sum);
	
}