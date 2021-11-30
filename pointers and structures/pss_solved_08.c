#include<stdio.h>

struct s1
    {
        char *z;
        int i;
        struct s1 *p;
    };

void main()
{
    
        static struct s1 a[] = {
                                    {"Nagpur",1,a+1},
                                    {"Raipur",2,a+2},
                                    {"Kanpur",3,a}
                               };

    pstruct s1 *ptr=a;
    printf("%s\n", ++(ptr->z));
    printf("%s\n", a[((++ptr)->i)].z);
    printf("%s\n", a[--(ptr->p->i)].z);
    
}