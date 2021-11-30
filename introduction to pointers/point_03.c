#include<stdio.h>
void main()
{
    int i=2;
    int *a,**k;
    a=&i;
    k=&a;

    printf("\nAddress of i : %u", a);
    printf("\nAddress of i : %u", &i);
    printf("\nAddress of i : %u", *k);
    printf("\nAddress of a : %u", k);
    printf("\nAddress of a : %u", &a);
    printf("\nAddress of k : %u\n", &k);

    printf("\nValue of i : %d", i);
    printf("\nValue of i : %d", *(&i));
    printf("\nValue of i : %d", *a);
    printf("\nValue of i : %d", **k);
    printf("\nValue of a : %u", a);
    printf("\nValue of k : %u", k);
  
  
  
    
}