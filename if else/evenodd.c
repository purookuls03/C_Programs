// Write a program in C to check whether a number is even or odd

#include<stdio.h>

void main()
{
	int a;
	printf("Enter any number \n");
	scanf("%d", &a);
	if((a%2)==0)
	printf("Entered number is even");
	else
	printf("Entered number is odd");
}