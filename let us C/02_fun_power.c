#include<stdio.h>
#include<math.h>

int powers(a,b)
{
    int c;
    c=pow(a, b);
    // printf("c=%d\n", c);
    return c;
}

void main()
{
    int a,b,fun_pow;

    printf("Enter the number : ");
    scanf("%d", &a);

    printf("Enter to the power : ");
    scanf("%d", &b);

    fun_pow=powers(a,b);

    printf("%d\n", fun_pow);


}