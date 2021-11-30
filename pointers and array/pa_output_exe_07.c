#include<stdio.h>
void main()
{
    int arr[]={12,14,15,23,45};
    printf("%u  %u\n", arr, &arr);
    printf("%u  %u\n",  arr+1, (&arr+1));
    printf("%d\n", 6422204+4+4+4+4);
    printf("%d\n", 6422204+8*4);
    printf("%d", 65486+8+8+8+8);
}