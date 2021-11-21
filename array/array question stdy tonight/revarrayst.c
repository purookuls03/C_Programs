#include<stdio.h>
#define MAX_ARRAY 5

int reverse (int num1, int arr[5])
{
	for (num1=0;i<5;i++) 
	{     
        	  printf("original array = %d\n", arr[i]);     
	}      
                          
    	printf("Array in reverse order: \n");

	for (num1=4;i>=0;i--)
	 {     
        	  printf("%d ", arr[i]);   
	 }
	
	return arr[i];
		
}


void main()
{
	int arr[MAX_ARRAY]={1,2,3,4,5};
	int temp;
	
	printf("Original array : \n");
	scanf("%d", &arr[MAX_ARRAY]);

	printf("Array in reverse order: \n");
	temp=arr[MAX_ARRAY];

	printf("%d ", temp);	
}