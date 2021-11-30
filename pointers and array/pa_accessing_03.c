#include<stdio.h>
void main()
{
    int num[]={23,34,12,44,26,17};
    int i, *j;
    j=&num[0];
    for(i=0;i<=5;i++)
    {
        printf("Address = %u    value = %d\n", j, *j);
        j++;
    }
}