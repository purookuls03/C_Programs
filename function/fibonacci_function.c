#include<stdio.h>

int fibonacii(int n,int a,int b);

void main()
{
    int n, a=0, b=1, fibo, i;

    printf("Enter any n term for fibonacci sries : ");
    scanf("%d", &n);
    printf("%d\n",a);
    printf("%d\n",b);

    fibo = fibonacii(n, a, b);

    // while(fibo!=1)
    // {
    //     printf("fibo = %d\n", i);
    // } 
}

int fibonacii(int n,int a,int b)
{
    int count=0,i;

    for(i=1;i<=n;i++)
    {
        count=a+b;
        a=b;
        b=count;
        printf("%d\n", count);
    }
    return count;
    // printf("count = %d\n", count);


}