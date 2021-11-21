#include<stdio.h>

void main()
{
    int arr[5]={1,2,3,4,5};
    static int *a[5];
    int i,temp;

    for(i=0;i<=4;i++)
    {
        // temp=arr[i];
        a[i]=arr[i];
        // a[i]=temp;
        // printf("%d\n", a[i]);
    }

    for(i=4;i>=0;i--)
    {
        printf("\n%d", a[i]);

    }

}