// Program to find whether he give vote or note

#include<stdio.h>

void main()
{
	int age;
	printf("Enter your age \n");
	scanf("%d", &age);
	
	if (age>=18)
	printf("Yes, you can vote");
	else
	printf("No, you cannot give vote");
}