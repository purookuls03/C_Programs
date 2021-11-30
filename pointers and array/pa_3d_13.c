#include<stdio.h>
void main()
{
    int a[3][3][3]={
                        {
                            1,2,3,
                            4,5,6,
                            7,8,9
                        },

                        {
                            9,7,5,
                            3,1,8,
                            6,4,2
                        },

                        {
                            11,22,33,
                            10,20,30,
                            15,25,35
                        }

                    };

        // int i,j,k;

        // for(i=0;i<3;i++)
        // {
        //     for(j=0;j<3;j++)
        //     {
        //         for(k=0;k<3;k++)
        //         {
        //             printf("%d ", a[i][j][k]);
        //         }
        //         printf("\n");
        //     }
        //     printf("\n");
        // }

        printf("%3d", a[0][0][0]);
        printf("%3d", a[0][0][1]);
        printf("%3d", a[0][0][2]);

        printf("\n%3d", a[0][1][0]);
        printf("%3d", a[0][1][1]);
        printf("%3d", a[0][1][2]);

        printf("\n%3d", a[0][2][0]);
        printf("%3d", a[0][2][1]);
        printf("%3d", a[0][2][2]);

        printf("\n\n%3d", a[1][0][0]);
        printf("%3d", a[1][0][1]);
        printf("%3d", a[1][0][2]);

        printf("\n%3d", a[1][1][0]);
        printf("%3d", a[1][1][1]);
        printf("%3d", a[1][1][2]);

        printf("\n%3d", a[1][2][0]);
        printf("%3d", a[1][2][1]);
        printf("%3d", a[1][2][2]);

        printf("\n\n%3d", a[2][0][0]);
        printf("%3d", a[2][0][1]);
        printf("%3d", a[2][0][2]);

        printf("\n%3d", a[2][1][0]);
        printf("%3d", a[2][1][1]);
        printf("%3d", a[2][1][2]);

        printf("\n%3d", a[2][2][0]);
        printf("%3d", a[2][2][1]);
        printf("of%3d", a[2][2][2]);

}