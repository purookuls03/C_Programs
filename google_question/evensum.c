/*Write a program in C to display the n terms of even natural number and their sum.

c is fun     */

#include<stdio.h>

int main()
{
	
	int a, b;
	int sum=0;

	printf("Enter number till you want some of even numbers : ");
	scanf("%d", &a);

	for (b=0;b<=a;++b)
	{
		printf("%d \n", 2*b);	
		sum=sum+b;
	}	
	printf("\ntotal is : %d \n", sum);

	scanf("%d", &b);

	return 0;

}