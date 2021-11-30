#include<stdio.h>
void main()
{
    int arr[]={0,1,2,3,4};
    int *ptr;
    for(ptr=arr+4;ptr>=arr;ptr--)
        printf("%d ", arr[ptr-arr]);
    
}