//reverse the array elements

#include<stdio.h>

void main()
{
	int a[5]={1,2,3,4,5},temp,b[5],i,j=4;
	

	for(i=0;i<5;i++)
	{
		b[j]=a[i];
		j--;

	}

	for(i=0;i<5;i++)
	{
		a[i]=b[i];

	}
	
	printf("After reversing the array : \n");
	for(i=0;i<5;i++)
	{
	
	 printf("%d\n", a[i]);
	}


	
}