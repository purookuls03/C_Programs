//sum of 10 integers

#include<stdio.h>

void main()
{
	int arr[100],size,sum=0,i;
    
   
    printf("Enter the size of array : ");
    scanf("%d", &size);

	printf("Enter the numbers : \n");
	for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
	
	

	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	
	printf("sum of array : %d", sum);
}