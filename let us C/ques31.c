#include<stdio.h>

void main()
{
    int num, fact=1, temp;
    
	printf("Enter a number: ");
    scanf("%d", &num);
    
	temp=num;
    
	while (num!=0)
    {
        fact = fact*num;
        num = num-1;
    }

    printf("Factorial : %d", fact);
}