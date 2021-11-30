#include<stdio.h>
void main()
{
    int *i, *j;
    *j = *i * 2;
    printf("j = %u\n", j);
}