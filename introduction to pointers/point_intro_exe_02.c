#include<stdio.h>
void swap(int,int);
void change(int,int);
int main()
{
    int c=10,d=20;
    printf("We are in main()....\n");
    printf("Address of c = %u   Address of d = %u\n", c, d);
    printf("before swap(), c=%d d=%d\n", c, d);
    swap(c,d);
    printf("Back to main()....\n");
    printf("After swap(), c = %d    d = %d\n", c, d);
    return 0;
}

void swap(int c,int d)
{
    printf("We are in swap()....\n");
    printf("Address of c = %u   Address of d = %u\n", c, d);
    printf("before change(), c=%d d=%d\n", c, d);
    change(c,d);
    printf("Back to main()....\n");
    printf("After swap(), c = %d    d = %d\n", c, d);
}

void change(int c,int d)
{
    int t;
    printf("We are in change()....\n");
    printf("Address of c = %u   Address of d = %u\n", c, d);
    printf("before interchanging, c=%d d=%d\n", c, d);
    t=c;
    c=d;
    d=t;
    printf("before interchanging, c=%d d=%d\n", c, d); 
}
