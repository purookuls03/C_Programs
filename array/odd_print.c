//Print odd numbers in array


#include<stdio.h>

void main()
{
	int arr[100],size,i;
    
   
    printf("Enter the size of array : ");
    scanf("%d", &size);

	printf("Enter the numbers : \n");
	for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
	
	for(i=0;i<size;i++)
	{	
		if ((arr[i]%2)==1)
		{
		printf("%d\n", arr[i]);
		}
	
		else
		printf("");
	}
}