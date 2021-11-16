#include<stdio.h>

void main()
{
	int num,temp=0;
	
	printf("Enter any five digit number : ");
	scanf("%d", &num);
	
	
	
	while(num!=0)
	{
		temp=temp*10;
		temp=temp+(num%10);	
		num=num/10;
	}
	
	printf("reverse = %d", temp);
	
	
	
	
}