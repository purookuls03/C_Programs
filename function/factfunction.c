#include<stdio.h>



int fact(int num1)
{
	printf("num1=%d\n", num1);
	int fact=1;
	
	for(int i=1;i<=num1;i++)
	{
			
			fact=fact*i;
			
	}
		return fact;
	
	
	
}

void main()
{
	int num=4, res;
	
	// printf("Enter the factorial number\n");
	// scanf("%d",&num);
	printf("res=%d, num=%d\n", res, num);
	res=fact(num);
	
	printf("res=%d\n", res);
	
}