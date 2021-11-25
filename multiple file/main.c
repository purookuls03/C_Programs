#include<stdio.h>
#include "sum.h"
#include "utility.h"

void main()
{
	int num1, num2, res, res1, res2, res3, res5, res6;
	
	printf("Enter the first number : ");
	scanf("%d", &num1);
	
	
	printf("Enter the second number : ");
	scanf("%d", &num2);
	
	res=sum(num1,num2);
	res1=sub(num1,num2);
	res2=multi(num1,num2);
	res3=div(num1,num2);
	res5=max(num1,num2);
	res6=min(num1,num2);
	
	printf("res=%d\n", res);
	printf("res1=%d\n", res1);
	printf("res2=%d\n", res2);
	printf("res3=%d\n", res3);
	printf("res5=%d\n", res5);
	printf("res6=%d\n", res6);
	
	
	
	int num, res4=-1;
	
	printf("Enter the prime number\n");
	scanf("%d",&num);
	
	res4=prime(num);
	printf("res4=%d\n", res4);
	
	if(res==1)
		printf("%d is prime number\n", num);
	else
		printf("%d is not prime number", num);
	
}