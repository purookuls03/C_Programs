#include<stdio.h>
void main()
{
    int a[2][3][4]  =   {
                            {
                                1,2,3,4,
                                5,6,7,8,
                                9,1,1,2
                            },

                            {
                                2,1,4,7,
                                6,7,8,9,
                                0,0,0,0
                            }
                        };

    printf("%u  %u  %u  %u\n", a, *a, **a, ***a);
}