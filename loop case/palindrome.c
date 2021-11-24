//wap in c to display to check whether a number is palindrome or not

#include<stdio.h>

void main()
{
	int num,temp,pal=0,num_temp;
	
	printf("Entera number : ");
	scanf("%d", &num);
	
	num_temp=num;
	
	while(num>=1)
	{
		//printf("num=%d\n", num);
		temp=num%10;
		//printf("temp=%d\n", temp);
		pal=pal*10;
		pal=pal+temp;
		//printf("pal=%d\n", pal);
		num=num/10;
		//printf("num=%d\n", num);
	}
	
	if(num_temp==pal)
	{
		printf("Palindrome number");
	}
	else
	{
		printf("NOT a palindrome number");
	}
	
	
	printf("\n%d", pal);
}