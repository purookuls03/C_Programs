#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr=malloc(15 * sizeof(*ptr));
    // printf("%d\n", sizeof(*ptr));
    if(ptr!=NULL)
    {
        *(ptr+5)=480;
        printf("6 element is %d", *(ptr+5));
    }

}