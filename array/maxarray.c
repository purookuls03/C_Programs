//Maximum in array

#include<stdio.h>

void main()
{
	int i,size,max=0;
	int a[5];

	printf("Enter the size of an array : ");
	scanf("%d", &size);

	printf("Enter numbes in array  : \n");

	for(i=0;i<size;i++)
	{
	 scanf("%d", &a[i]);
	}

	for(i=0;i<size;i++)
	{
	   if(a[i]>max)
	   {
	     max=a[i];
	   }
	   else
	  {
	    printf(" ");
	   }
	}

	printf("The largest number is %d ", max);
}