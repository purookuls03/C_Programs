// store and display a prime number

#include<stdio.h>

void main()
{
	int arr[100],size,num,i,j=0,temp;
    
   
    printf("Enter the size of array : ");
    scanf("%d", &size);

	printf("Enter the numbers : \n");
	for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
	
	for(i=0;i<size;i++)
	{
		//printf("insdie i loop prime numbers : %d\n", arr[i]);
		temp=0;
		
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				temp=1;
				
			}
			
			
		}
		
		//printf("outside i loop prime numbers : %d\n", arr[i]);

        if(temp==0)
		{
			printf("prime numbers in array : %d\n", arr[i]);
		}
     
	}

}