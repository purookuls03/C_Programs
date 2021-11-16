#include<stdio.h>
#include<math.h>

void main()
{
	int arr[50],i,size,sum=0,count=0;
	
	printf("Enter the size of array : ");
	scanf("%d", &size);
	
	printf("Enter the elements in array : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	
	
	for(i=size-1;i>=0;i--)
	{
			 sum=sum+arr[i]*(pow(10, count));
			 count++;
			 printf("inside loop sum = %d\n", sum);
			
	}
		printf("sum = %d\n", sum);
	

}