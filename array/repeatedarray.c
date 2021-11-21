#include<stdio.h>

void main()
{
	int arr1[100], arr2[100];
	int size, count, i, j;

	printf("Enter the sizez of array : ");
	scanf("%d", &size);

	printf("Enter the numbers in array : %d", count);

	for(i=0;i<size;i++)
	{
	 scanf("%d", &arr1[i]);
	}

	for(i=0;i<size;i++)
	{
	  for(j=0;j<count;j++)
	  {
		for(j=0;j<count;j++)
		{
			arr1[i]==arr2[j];
		
		}
	  }
	printf("%d \n", arr2[j]);
	}

}