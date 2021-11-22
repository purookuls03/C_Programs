#include<stdio.h>
#include<math.h>

int area_triangle(int a,int b,int c);

void main()
{
    int a,b,c,at;

    printf("Enter the length of triangle : ");
    scanf("%d%d%d", &a, &b, &c);

    at = area_triangle(a, b, c);

    printf("area of triangle : %d", sqrt(at));
}

int area_triangle(int a,int b,int c)
{
    int s,area;

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("area = %d\n", sqrt(area));

    return area;

}