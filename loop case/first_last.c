//wap in c to find first and last digit of a given number

#include <stdio.h>

void main()
{
    int num, sum=0, firstdigit, lastdigit;

    printf("Enter number = ");
    scanf("%d", &num);

    lastdigit=num%10;
	while(num>=10)
    {
		
		//printf("inside loop 1 num = %d\n", num);
		num = num/10;
		//printf("inside loop 2 num = %d\n", num);
    }
	
	

    firstdigit=num;

    printf("first digit = %d\n", firstdigit);
	printf("last digit = %d", lastdigit);

    
}