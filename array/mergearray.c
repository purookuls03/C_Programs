#include<stdio.h>

void main()
{
	int a[5]={1,2,3,4,5}, b[5]={6,7,8,9,10};
	int c[10], i, j=0;

	for(i=0;i<5;i++)
	{
		c[j]=a[i];
		j++;

	}

	for(i=0;i<5;i++)
	{
		c[j]=b[i];
		j++;
	}

	for(i=0;i<10;i++)
	{
		printf("After merging array %d \n", c[i]);
	}

}