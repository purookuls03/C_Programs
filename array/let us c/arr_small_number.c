#include<stdio.h>

void main()
{
    int size,arr[size],i,temp;
    int *small,n;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements in the array : \n");
    for(n=0;n<=size;n++)
    {
        scanf("%d", &arr[n]);
    }

    *small=arr[0];
    
    
    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    
    printf("\nSmallest number in array : %d\n", small);
        
    

    
}



