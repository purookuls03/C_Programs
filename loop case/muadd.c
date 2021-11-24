// Make a program to add the 2 or more numbers between them
// C is fun

#include<stdio.h>

int main()
{
	int a, b, c;
	

	printf("Enter any number a: \n");
	scanf("%d", &a);

	while (a<10)
	{
	 b=a%10;
	 c=a+b;
	
	 a=a/10;
	 
	 
	 printf("%d", c);
	 
	}
	
	 
 

	return 0;
}