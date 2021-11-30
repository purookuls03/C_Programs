#include<stdio.h>
float *multiply(int ,float );
int main()
{
    int i=3;
    float f=3.50, *prod;
    prod=multiply(i,f);
    printf("prod = %u   value at address = %f\n", prod, *prod);
    return 0;
}

float *multiply(int ii,float ff)
{
    float product;
    product = ii * ff;
    printf("product = %f    address of product = %u\n", product, &product);
    return (&product);
}
