#include<stdio.h>
void main()
{
    void fun();
    int i=1;
    while(i<=5)
    {
        printf("%d\n",i);
        if(i>2)
            goto here;
    }
}
void fun()
{
    here:
    printf("blah blah");
}