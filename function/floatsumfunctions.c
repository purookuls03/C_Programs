#include <stdio.h>

float sum(float a, float b)
{
	float c = a+b;
	printf("c=%f\n", c);
   	return c;
}

void main()
{
  	 float num1, num2, num3;
   
	printf("Enter first number: ");
  	 scanf("%f", &num1);
  
	 printf("Enter second number: ");
 	  scanf("%f", &num2);

   	num3 = sum(num1, num2);
  
 	printf("Sum = %0.5f", num3);
}