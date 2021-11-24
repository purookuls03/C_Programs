#include<stdio.h>

int rev_first_last(int num,int arr[5])
{
	int i,temp; 
	
	printf("outside loop original array = %d\n", arr[i]); 
	 
	for (num=0;i<5;i++) 
	{     
        	  printf("original array = %d\n", arr[i]);     
	}      
         printf("outside loop original array = %d\n", arr[i]);                  
	
	arr[0]=arr[4];
	temp=arr[0];
	arr[4]=temp;

	for (num=4;i>=0;i--)
	 {     
        	  printf("array in reverse : %d \n", arr[i]);   
	 }
	
	return arr[i];
}


void main()
{
	int swap_rev, num, a=5;
	int arr[a];
	
	
	printf("Original array : \n");
	scanf("%d", &arr[a]); 
	
	swap_rev=rev_first_last(num,arr);
	
	printf("swap_rev : %d", swap_rev);

}