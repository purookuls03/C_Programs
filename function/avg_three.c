#include<stdio.h>

float aver_age(int a, int b, int c)
{
    float res;

    res = (float)(a+b+c)/3;
    
    // printf("%f\n", res);

    return res;

    
}


void main()
{
    int a,b,c;
    float avg;
    
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);
  
    avg = aver_age(a, b, c);

    printf("average value = %f", avg);

}