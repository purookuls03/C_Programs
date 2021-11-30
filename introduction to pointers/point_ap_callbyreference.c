#include<stdio.h>

void areaperi(int, float *, float *);

void main()
{
    int radius;
    float area,perimeter;
    printf("Enter the radius : ");
    scanf("%d", &radius);
    areaperi(radius,&area,&perimeter);
    printf("\nArea = %f", area);
    printf("\nPerimeter = %f", perimeter);
}

void areaperi(int r,float *a,float *p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}