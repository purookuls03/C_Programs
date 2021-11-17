//wap in c to display the n terms of fibonacci numbers

#include<stdio.h>

void main()
{
	int num,a=0,b=1,temp=2,count;
	
	printf("Entera number : ");
	scanf("%d", &num);
	
	printf("%d\n", a);
	printf("%d\n", b);
	
	while(temp<=num)
	{
		count=a+b;
		a=b;
		
		//printf("count = %d", count);
		b=count;
		//printf("count = %d", b);
		
		printf("%d\n", count);
		temp++;
	
	}

	//printf("temp=%d", temp);
}