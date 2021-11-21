#include<stdio.h>

void main()
{
    float a[]={13.24,1.,1.5,1.5,5.4,3.5};
    float *j;
    j=a;
    j=j+4;
    printf("%u  %f   %f\n1", j, *j, a[4]);
}


