#include<stdio.h>

void main()
{
	int x,y;
	
	printf("Enter the x-position : ");
	scanf("%d", &x);
	
	printf("Enter the y-position : ");
	scanf("%d", &y);
	
	
	if(x==0)
	{
		if(y==0)
			printf("it lies on the origin\n");
		else if(y!=0)
			printf("It lies on y axis");
		else
			printf("it lies on both axis");
	}		
	
	else if(y==0)
	{
		if(x==0)
			printf("it lies on the origin");
		else if(x!=0)
			printf("it lies on x axis");
		else
			printf("it lies on both axis");
	}
	
	else
		printf("it lies on both axis");
}