//wap in c to find swap of first and last digit of a given number

#include <stdio.h>

void main()
{
    int num, firstdigit, lastdigit, temp;

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
	printf("last digit = %d\n", lastdigit);

	temp=firstdigit;
	firstdigit=lastdigit;
	lastdigit=temp;
	
	printf("first digit after swaping = %d\n", firstdigit);
	printf("last digit after swaping = %d", lastdigit);
    
}