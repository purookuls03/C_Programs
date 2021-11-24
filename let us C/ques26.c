#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter first side of triangle: \n");
	scanf("%d", &a);
	
	printf("Enter second side of triangle: \n");
	scanf("%d", &b);
	
	printf("Enter third side of triangle: \n");
	scanf("%d", &c);
	
	if ((a+b>c) && (a+c>b) && (b+c>a))
	{
		printf("Triangle is valid.");
	}
	else
	{
		printf("Triangle is not valid.");
	}
	
}