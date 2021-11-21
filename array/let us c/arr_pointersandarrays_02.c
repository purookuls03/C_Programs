#include<stdio.h>

void main()
{
    int i=3, *x;
    float j=1.5, *y;
    char k='c', *z;
    printf("\n%d\n", sizeof(int));
    printf("Value of i = %d\n", i);
    printf("Value of j = %f\n", j);
    printf("Value of k = %c\n", k);

    x=&i;
    y=&j;
    z=&k;

    printf("\nOriginal address in x = %u\n", x);
    printf("Original address in y = %u\n", y);
    printf("Original address in z = %u\n", z);

    x++;
    y++;
    z++;

    printf("\nNew address in x = %u\n", x);
    printf("New address in y = %u\n", y);
    printf("New address in z = %u\n", z);

    // i++;
    // j++;
    // k++;

    // printf("\nNew Value of i = %d\n", i);
    // printf("New Value of j = %f\n", j);
    // printf("New Value of k = %c\n", k);

    // printf("\nNew address in x = %u\n", x);
    // printf("New address in y = %u\n", y);
    // printf("New address in z = %u\n", z);


}