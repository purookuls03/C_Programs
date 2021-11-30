#include<stdio.h>
void main()
{
    static int a[]={0,1,2,3,4};
    static int *p[]={a,a+1,a+2,a+3,a+4};
    int **ptr;
    ptr=p;
    printf("%d  %d  %d  %u  %u  %u\n", ptr-p, *ptr-a, **ptr, a, p, ptr);
    **ptr++;
    printf("%d  %d  %d  %u  %u  %u\n", ptr-p, *ptr-a, **ptr, a, p, ptr);
    *++*ptr;
    printf("%d  %d  %d  %u  %u  %u\n", ptr-p, *ptr-a, **ptr, a, p, ptr);
    ++*ptr;
    printf("%d  %d  %d  %u  %u  %u", ptr-p, *ptr-a, **ptr, a, p, ptr);,
    
}