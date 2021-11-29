/* Write a C program to calculate the factorial of a given number.

C is fun   		*/

#include<stdio.h>

void main()
{
	int fact;
	int a, b=1;

	printf("Input the number : ");
	scanf("%d", &fact);

	for (a=1;a<=fact;a++)
	{
		b=b*a;
	}
 	 printf("%d", b);
}