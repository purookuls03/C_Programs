#include<stdio.h>

void main()
{
	int num,temp=0;
	
	printf("Enter the five digit number : ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		num=num/10;
		num=temp+1;
		
	}
	
	printf("result = %d", num);

}