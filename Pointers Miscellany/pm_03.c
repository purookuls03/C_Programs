#include<stdio.h>
#include<stdarg.h>

int findmax(int,...);

int main()
{
    int max;
    max=findmax(5,23,15,1,92,50);
    printf("Max : %d", max);
    max=findmax(3,300,100,129);
    printf("\nMax : %d", max);
    return 0;
}

int findmax(int tot_num,...)
{
    int max,count,num;
    va_list ptr;
    va_start(ptr,tot_num);
    for(count=1;count<tot_num;count++)
    {
        num=va_arg(ptr,int);
        if(num>max)
            max=num;
    }

    return (max);
}
