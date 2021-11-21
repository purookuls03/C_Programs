#include<stdio.h>
void main()
{
    int num[]={24,34,12,44,56,17};
    int i;
    for(i=0;i<=5;i++)
    {
        printf("element number %d\n", i);
        printf("element : %d\n", num[i]);
        printf(" address : %u\n\n", &num[i]);
    }
}