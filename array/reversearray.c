#include<stdio.h>

void main()
{
                int arr[] = {1, 2, 3, 4, 5, 6};
	int i, length=sizeof(arr[0]);

             printf("Original array: \n");    
  
             for (int i = 0; i < length; i++) 
	{     
        	  printf("%d ", arr[i]);     
    	}      
              printf("\n");    
        
    	printf("Array in reverse order: \n");

	for (i = length-1; i >= 0; i--)
	 {     
        	  printf("%d ", arr[i]);   
	 }


}