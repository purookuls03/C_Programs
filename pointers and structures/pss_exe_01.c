#include<stdio.h>

struct a
        {
            char *str;
            struct a *ptr;
        };

void main()
{
    
        static struct a arr[] = {
                                        {"Niranjan",arr+2},
                                        {"Praveen",arr},
                                        {"Asish",arr+1}
                                };

    struct a *p[3];
    int i;
    for(i=0;i<=2;i++)
        p[i]=arr[i].ptr;
    printf("\n%s", p[0]->str);
    printf("\n%s",(*p)->str);
    printf("\n%s", (**p));

}