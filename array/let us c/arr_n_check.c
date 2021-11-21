#include<stdio.h>

void main()
{
    int size,arr[size],n,i,temp;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements in the array : \n");
    for(n=1;n<=size;n++)
    {
        scanf("%d", &arr[n]);
    }

    for(i=0;i<=n;i++)
    {
        if(arr[i]==arr[n-1])
        {
            printf("arr[%d]=arr[%d-(%d)] is %d\n", i, n, (n+1), arr[i]);
        }

        else
            printf("Nothing find\n");

    }


}