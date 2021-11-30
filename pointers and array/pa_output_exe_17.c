#include<stdio.h>
void main()
{
    int arr[]={0,1,2,3,4};
    int i, *p;
    for(p=arr,i=0;p+i<=arr+4;p++,i++)
    {
        printf("%-2d", *(p+i));
    }
}