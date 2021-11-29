//Write a program in C to display the multiplication table of a given integer.
//C is fun

#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter your number : \n");
	scanf("%d", &a);
	printf("\n");

	for (b=1;b<=10;b++)
	{
		printf("%d * %d = %d \n", a, b, a*b);
	}

}