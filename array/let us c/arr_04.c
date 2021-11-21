#include<stdio.h>
void main()
{
    int arr[]={10,20,30,40,50,60};
    int *i, *j;

    i=&arr[1];
    j=&arr[5];
    printf("arr[1] = %u\n", &arr[1]);
    printf("arr[5] = %u\n", &arr[5]);
    printf("%u   %d", j-i, *j-*i);

}