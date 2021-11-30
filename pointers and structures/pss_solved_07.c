#include<stdio.h>
struct s1
    {
        char *str;
        int i;
        struct s1 *ptr;
    };
    
void main()
{
    static struct s1 a[] = {
                                {"Nagpur",1,a+1},
                                {"Raipur",2,a+2},
                                {"Kanpur",3,a}
                           };

    struct s1 *p=a;
    int j;
    for(j=0;j<=2;j++)
    {
        printf("%d ", --a[j].i);
        printf("%u\n", ++a[j].str);
    }
}