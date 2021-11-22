#include<stdio.h>


int sum(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}








void main()
{
	int num1, num2, x, y, z, n;
	
		printf("Enter the first number : ");
		scanf("%d", &num1);
		
		printf("Enter the second number : ");
		scanf("%d", &num2);
		
		x=sum(num1,num2);
		y=sub(num1,num2);
		z=multiply(num1,num2);
		n=div(num1,num2);
		
		printf("sum=%d\n, sub=%d\n, multipy=%d\n, div=%d\n", x, y, z, n);
}