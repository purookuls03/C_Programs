//wap in c to find reverse of digits number

#include <stdio.h>

void main()
{
    int num,temp,rev;

    printf("Enter number = ");
    scanf("%d", &num);
	
	
	while(num!=0)
	{
		temp=num%10;
		printf("%d", temp);
		num=num/10;
	}
	
	
	
}