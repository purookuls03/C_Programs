#include<stdio.h>

struct s1
    {
        char *z;
        int i;
        struct s1 *p;
    };

void main()
{

    static struct s1 a[] =  {
                                {"Nagpur",1,a+2},
                                {"Ranpur",2,a+1},
                                {"Kanpur",3,a}
                            };
    
    struct s1 *ptr=a;

    printf("%s  %s  %s", a[0].z, ptr->z, a[2].p->z);

    printf("\n%u", a[0].z);
    printf("\n%u", a[2].p->z);
    printf("\n%s", a[1].p->z);
    printf("\n%u", a[1].p->z);
}