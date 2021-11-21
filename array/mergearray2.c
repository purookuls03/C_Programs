#include<stdio.h>

void main()
{
	int a[5]={1,2,3,4,5}, b[5]={6,7,8,9,10};
	int c[11], i;
	
	
	
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
		
	}
        

	for(i=0;i<5;i++)
	{
        
		c[i+5]=b[i];
	             
	}

	printf("\n%d%d\n", c[i], c[i+5]);
	
}