#include<stdio.h>
void main()
{
    int arr[3][3][3];
    printf("%u  %u  %u\n", arr, arr+1, arr+2);
    printf("%u  %u  %u\n", arr[0], arr[0]+1, arr[1]);
    printf("%u  %u  %u\n", arr[1][1], arr[1][0]+1, arr[0][1]);
   
}