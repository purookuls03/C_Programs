#include<stdio.h>
void main()
{
    static int a[3][3][3] = {
                                {
                                    1,2,3,
                                    4,5,6,
                                    7,8,9
                                },
                                {
                                    2,4,6,
                                    8,10,12,
                                    14,16,18
                                },
                                {
                                    3,6,9,
                                    12,15,18,
                                    21,24,27
                                }
                            };

    static int *ptr[] = {
                            a[0][0],a[0][1],a[0][2],
                            a[1][0],a[1][1],a[1][2],
                            a[2][0],a[2][1],a[2][2]
                        };

    int *ptr1={a[0],a[1],a[2]};
    int i,**ptr2=ptr;

    printf("\n");
    for(i=0;i<=8;i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
    
    printf("\n");
    for(i=0;i<=2;i++)
    {
        printf("%d ", *(ptr1[i]));
    }
    
    printf("\n");
    for(i=0;i<=8;i++)
    {
        printf("%d ", *ptr[i]);
    }
}