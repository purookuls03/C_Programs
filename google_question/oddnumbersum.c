//Display the sum of n number of odd natural number
//C is fun

#include<stdio.h>

void main()
{
	int a, b;
	int sum;

	printf("Enter number till you want some of odd numbers : ");
	scanf("%d \n", &a);

	printf("  ");
	
	for (b=1;b<=a;b++)
	{
		printf("%d", 2*b-1);	
		sum+=2*b-1;
	}	
	printf("%d \n", sum);

}