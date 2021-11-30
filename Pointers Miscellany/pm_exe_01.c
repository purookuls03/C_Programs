#include<stdio.h>
#include<stdarg.h>

int findmax(int,...);

int main()
{
    int max;
    max=findmax(5,23,15,1,92,50);
    // printf("Max : %d", max);
    // max=findmax(3,300,100,129);
    // printf("\nMax : %d", max);
    return 0;
}

int findmax(int num,...)
{
    int max=1,i,num,temp;
    va_list ap;
    va_start(ap,num_argu);
    for(i=1;i<num;i++)
    {
       printf("\nInside the loop"); 
        if(num>max)
        {
            va_start(ap,num);
            temp=num;
            num=max;
            max=temp;
                                                                                                                            
        }
            printf("\n%d", max);
    }

    for(i=1;i<num_argu;i++)
    {
        printf("\nInside the loop 2");
        printf("\n%d", num_argu);
    }
}
