#include<stdio.h>

int nn_sum(int num);

void main()
{
    int num=25, natural_sum;

    natural_sum = nn_sum(num);

    printf("sum of 25 natural number is : %d", natural_sum);


}

int nn_sum(int num)
{
    int i,sum=0;

    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    
    // printf("sum = %d\n", sum);
   
    return sum;


}