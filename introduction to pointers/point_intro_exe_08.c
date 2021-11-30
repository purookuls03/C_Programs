#include<stdio.h>
void main()
{
    int i=10,j=20,diff;
    diff=&j-&i;
    printf("%u      %u\n", &i, &j);
    printf("diff = %d", diff);
}