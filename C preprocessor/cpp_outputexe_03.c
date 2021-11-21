#include<Stdio.h>
#define PRODUCT(x) (x*x)
void main()
{
    int i=3,j,k;
    j=PRODUCT(i++);
    // printf("i=%d\n", i);
    // printf("j=%d\n", j);
    // printf("k=%d\n", k);
    k=PRODUCT(++i);
    // printf("j=%d\n", j);
    // printf("i=%d\n", i);
    printf("%d\t%d\n", j, k);
}