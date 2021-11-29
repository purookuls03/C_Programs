/* Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]
C is fun */

//Incomplete*

#include<stdio.h>

void main()
{
	int a, b;
	int k=1;

	printf("Input any terms of a :  ");
	scanf("%d", &a);

	for (b=1;b<=a;b++)
	{
		printf("(%d/%d)", k, b);
	}

	


}