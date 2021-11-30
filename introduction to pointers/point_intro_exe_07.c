#include<stdio.h>
void main()
{
    char *c=4000;
    int *i=4000;
    float *f=4000;
    double *d=4000;
    printf("c=%u    c+1 = %u\n", c, c+1);
    printf("i=%u    i+1 = %u\n", i, i+1);
    printf("f=%u    f+1 = %u\n", f, f+1);
    printf("d=%u    d+1 = %u\n", d, d+1);
}