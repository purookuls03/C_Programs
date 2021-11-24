//Wap to count number of digits in number

#include<stdio.h>
#include<string.h>

void main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%s", &num);
	
	while(num!=0)
	{
			  num=num/10;
			  num++;
	}

	printf("%d", num);
}