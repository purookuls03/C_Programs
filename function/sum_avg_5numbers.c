#include<stdio.h>

int sum(int a,int b,int c,int d,int e);
int average(int a,int b,int c,int d,int e);

void main()
{
    int a,b,c,d,e,add,avg;
    printf("Enter any five values : \n");
   
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    add=sum(a,b,c,d,e);

    printf("sum of values = %d\n", add);

    avg = average(a,b,c,d,e);

    printf("Average of values = %d\n", avg);

}

int sum(int a,int b,int c,int d,int e)
{
    return (a+b+c+d+e);
}

int average(int a,int b,int c,int d,int e)
{
    int sum=a+b+c+d+e,avg;
    avg = sum/5;
    return avg;
}

