#include<stdio.h>
void print(int *, int *, int *, int *, int *);
void main()
{
    int arr[]={97,98,99,100,101,102,10,104};
    // printf("%d\n", &arr[0]);
    // printf("%d\n", arr[3]);
    printf("%d\n", arr);
   
    int *ptr = arr + 1;
    printf("%u\n", *ptr);
    printf("Address of Ptr==%u, Address of arr=%u\n",ptr,arr);
    print(++ptr, ptr--, ptr, ptr++, ++ptr);
    printf("Address of Ptr==%u, Address of arr=%u\n",ptr,arr);
    printf("%u  %u  %u  %u  %u", ++ptr, ptr--, ptr, ptr++, ++ptr);
}

void print(int *a, int *b, int *c, int *d, int *e)
{
    printf("%d  %d  %d  %d  %d\n", *a, *b, *c, *d, *e);
}