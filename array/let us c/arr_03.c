#include<stdio.h>

void main()
{
    int i=4,*j,*k;
    j=&i;
   
    // j=j+1;
    // j=j+9;
    // k=j+3;
    //  printf("j = %d\n", j);
    //  j--;
    //   printf("j = %d\n", j);
    j=j-2;
    //  printf("j = %d\n", j);8i
    j=j-5;
    //  printf("j = %d\n", j);
    k=j-6;

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);

}