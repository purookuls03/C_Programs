#include<stdio.h>

void main()
{
	int num,temp=0;
	int c;
	
	printf("Enter any five digit number : ");
	scanf("%d", &num);
	
	
	
	while(num!=0)
	{
		temp=temp*10;
		temp=temp+(num%10);	
		num=num/10;
	}
	
	printf("reverse = %d\n", temp);
	
	if(num==temp)
		printf("original and reversed number are equal\n");
	else
		printf("original and reversed are not equal");

}