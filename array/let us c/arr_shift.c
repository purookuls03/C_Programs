#include<stdio.h>

void main()
{
    int p[5]={15,30,28,19,61};
    int i,temp;

    for(i=0;i<5;i++)
    {
        p[i]=p[i+2];
        printf("%d ", p[i]);
    }
}