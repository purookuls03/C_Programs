//wap in c to find sum of digits number

#include <stdio.h>

void main()
{
    int num,sum=0,temp;

    printf("Enter number = ");
    scanf("%d", &num);
	
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
	
	}

	printf("sum=%d", sum);
	
}