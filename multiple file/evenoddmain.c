#include<stdio.h>
#include "evenodd.h"

int main()
{
    int num, res, res1;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
	res=Even(num);
	res1=Odd(num);
	
	printf("%d is even", res);
	printf("%d is odd", res1);
	
	
    return 0;
}