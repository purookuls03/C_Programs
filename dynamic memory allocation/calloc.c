#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,*ptr,sum=0;

    ptr=calloc(10, sizeof(int));

    for(i=0;i<10;i++)
    {
        *(ptr+i)=i;
        sum+=*(ptr+i);
    }

    printf("Sum = %d", sum);

    free(0);
}