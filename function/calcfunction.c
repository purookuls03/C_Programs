#include <stdio.h>

	int add(int, int);
	int sub(int, int);
	int multiply(int, int);
	int div(int, int);
	
	void main()
	{
		int a, b;
		
		printf("Enter the value of a : ");
		scanf("%d",&a);
		printf("Enter the value of b : ");
		scanf("%d", &b);
		
		printf("%d\n", add(a,b));
		printf("%d \n", sub(a,b));
		printf("%d \n", multiply(a,b));
		printf("%d \n", div(a,b));
		
		
	}

	int add(int a,int b)
	{
		
		return a+b;
	}

	int sub(int a,int b)
	{
		
		return a-b;
	
	}

	int multiply(int a,int b)
	{
			
		return a*b;
	
	}

	int div(int a,int b)
	{
		return a/b;
	}










