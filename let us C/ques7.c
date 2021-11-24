#include<stdio.h>

void main()
{
	int num,temp=0,c,a;
	
	printf("Enter the five digit number :");
	scanf("%d", &num);
	a=num;
	
	#if(0)
		
	temp=temp+(a%10);
	c=a/10;
	a=c;
	#endif
	
	do
	{
		temp=temp+(a%10);
		c=a/10;
		a=c;
		printf("c==%d,a==%d,temp=%d\n",c,a, temp);
	}	while(c!=0);
	
	
	
	
	printf("Sum of Deigit is ==%d", temp);

}