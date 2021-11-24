#include<stdio.h>

int fact(int num1)
{
	
	int fact=1,i;
	
	for(i=1;i<=num1;i++)
	{
			
			fact=fact*i;
			
	}
		return fact;
	
}

void main()
{
	int num, res=1;
	
	printf("Enter the factorial number\n");
	scanf("%d",&num);
	// printf("res=%d, num=%d\n", res, num);
	res=fact(num);
	// printf("res=%d, num=%d\n", res, num);
	printf("factorial = %d\n", res);
	
}