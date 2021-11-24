//WAP in c to check whether the number is perfect or not

#include<stdio.h>

void main()
{
	int num,i,sum=0;
	
	printf("ENter the number : ");
	scanf("%d", &num);
	
	for(i=1;i<num;i++)
	{
		//printf("inside loop i = %d\n", i);
		if(num%i==0)
		{
			//printf("inside loop if else i = %d\n", i);
			sum=sum+i;
			//printf("inside loop if else num = %d\n", num);
		}
		
	}
	
	if(sum==num)
	{
		printf("perfect number");
	}
	
	else
	{
		printf("not a perfect number");
	}


}