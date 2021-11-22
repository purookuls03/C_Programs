#include<stdio.h>

int sum_natural(int num)
{
    int i,sum;

    for(i=1;i<=num;i++)
    {
        sum+=i;
    }

    return sum;

}

void main()
{
    int num,natural_sum;

    printf("Enter the n term of natura number : ");
    scanf("%d", &num);
   
    natural_sum = sum_natural(num);

    printf("%d", natural_sum);

}