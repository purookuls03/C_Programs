#include <stdio.h>
 
int maximum(int a[])
{
	int i,max=a[0];
		
	


	for(i=0;i<10;i++)
	{
	   if(a[i]>max)
	   {
	     max=a[i];
	   }
	  
	}

	return max;
	
}


int minimum(int a[])
{
	int i,min=a[0];
	
	

	for(i=0;i<10;i++)
	{
	   if(a[i]<min)
	   {
	     min=a[i];
	   }
	}

	return min;
}


void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int max,min;

	max=maximum(a);
	min=minimum(a);

	printf("max=%d\n", max);
	printf("min=%d\n", min);
	
}