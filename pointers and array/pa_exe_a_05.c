#include<stdio.h>
void main()
{
    static int a[]={0,1,2,3,4};
    static int *p[]={a,a+2,a+1,a+4,a+3};
    int **ptr;
    ptr=p;
    printf("before increment : %u\n", **ptr);
    printf("before increment : %u\n", **ptr++);
    printf("before increment : %u\n", **++ptr);
    **++ptr;
    printf("after increment : %u\n", **ptr);
    printf("after increment : %u\n", **ptr++);
    printf("after increment : %u\n", **++ptr);
    printf("%d\n", ptr-p);
    printf("%d  %d  %d\n", **ptr, ptr-p, *ptr-a);
}