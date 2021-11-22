#include<stdio.h>
#include<math.h>

void main()
{
    int num1,num2,sum_f,subtract_f,multiply_f,divide_f,square_f,a,b;
    float roots_f;
    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    sum_f=sum(a,b);
    subtract_f=subtract(num1,num2);
    multiply_f=multiply(num1,num2);
    divide_f=divide(num1,num2);
    square_f=square_sum(num1,num2);
    roots_f=roots(num1,num2);

    printf("%d\n", sum_f);
    printf("%d\n", subtract_f);
    printf("%d\n", multiply_f);
    printf("%d\n", divide_f);
    printf("%d\n", square_f);
    printf("%d\n", roots_f);

}

int sum(int a,int b)
{
    int add;
    add=a+b;
    return add;
}

int subtract(int num1,int num2)
{
    int sub;
    sub=num1-num2;
    return sub;
}

int multiply(int num1,int num2)
{
    int multi;
    multi=num1*num2;
    return multi;
}

int divide(int num1,int num2)
{
    int div;
    div=num1/num2;
    return div;
}

int square_sum(int num1,int num2)
{
    int sq1, sq2, sq_sum;
    sq1=num1*num1;
    sq2=num2*num2;
    printf("%d\n", sq1);
    printf("%d\n", sq2);
    sq_sum=sq1+sq2;
    return sq_sum;
}

int roots(int num1,int num2)
{
    float root1, root2, root_sum;

    root1=sqrt(num1);
    root2=sqrt(num2);
    printf("%f\n", root1);
    printf("%f\n", root2);
    root_sum=root1+root2;
    return root_sum;
}