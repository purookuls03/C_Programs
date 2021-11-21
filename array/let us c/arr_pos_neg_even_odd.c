#include<stdio.h>

void main()
{
    int arr[25]={1,2,3,-1,-2,-3,5,6,7,8,9,11,-4,-5,-6,-7,-8,-9,-11,12,13,14,15,-12,-15};
    int i;

    // printf("Enter the numbers in array : \n");
    // for(i=0;i<=25;i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    for(i=0;i<=25;i++)
    {
        if(arr[i]<0)
        {
            if(arr[i]%2==0)
            {
                printf("negative even = %d\n", arr[i]);
            } 

            else
            {
                printf("negative odd = %d\n", arr[i]);
            }  
        }

        else 
        {
           if(arr[i]%2==0)
            {
                printf("positive even = %d\n", arr[i]);
            } 

            else
            {
                printf("positive odd = %d\n", arr[i]);
            }
        }

     
    }


}