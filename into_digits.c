//wap in c to find products of digits number

#include <stdio.h>

void main()
{
    int num,product=1,temp;

    printf("Enter number = ");
    scanf("%d", &num);
	
	while(num!=0)
	{
		temp=num%10;
		product=product*temp;
		num=num/10;
	
	}

	printf("product=%d", product);
	
}