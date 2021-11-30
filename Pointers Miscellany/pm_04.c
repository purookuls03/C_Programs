#include<stdarg.h>
#include<stdio.h>
#include<stdarg.h>

void display(int,int,...);

int main()
{
    printf("\n");
    display(1,2,5,6);
    printf("\n");
    display(2,4,'A','c','e','W','z');
    printf("\n");
    display(3,'E',3.44,2.5,299.3,-1.0);
    printf("\n");
    return 0;
}

void display(int type,int num,...)
{
    int i,j;
    char c;
    float f;
    va_list ptr;
    va_start(ptr,num);
    switch(type)
    {
        case 1:
            for(j=0;j<=num;j++)
            {
                i=va_arg(ptr,int);
                printf("%d",i);
            }
            break;
        case 2:
            for(j=0;j<=num;j++)
            {
                c=va_arg(ptr, char);
                printf("%c",c);
            }
            break;  
        case 3:
            for(j=0;j<=num;j++)
            {
                f=(float) va_arg (ptr,double);
                printf("%f",f);
            }
    }
}