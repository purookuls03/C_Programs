#include<stdio.h>
#define ROW 3
#define COL 4

int main()
{
    int i,j;
    int *a;
    int *fun1();
    int (*b)[COL];
    int (*fun2())[COL];
    int *p;
    int (*c)[ROW][COL];
    int (*fun3())[ROW][COL];
    a=fun1();
    printf("Array a[][] in main() : \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ", *(a + i * COL + j));
        }
        printf("\n");
    }

    b=fun2();
    printf("Array b[][] in main() : \n");
    for(i=0;i<ROW;i++)
    {
        p=(int *)(b + i);
        for(j=0;j<COL;j++)
        {
            printf("%d ", *p);
        }
        printf("\n");
    }

    c=fun3();
    printf("Array b[][] in main() : \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ", (*c)[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int *fun1()
{
    static int a[ROW][COL]={
                                1,2,3,4,
                                5,6,7,8,
                                9,0,1,6
                           };

    int i,j;

    printf("Array a[][] in fun1() : \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return (int *)a;
}

int (*fun2())[COL]
{
    static int b[ROW][COL]={
                                9,4,6,4,
                                1,3,2,1,
                                7,5,1,6
                           };
    int i,j;
    printf("Array b[][] in fun1() : \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return b;
}


int (*fun3())[ROW][COL]
{
    static int c[ROW][COL]={
                                6,3,9,1,
                                2,1,5,7,
                                4,1,1,6
                           };

    int i,j;
    printf("Array c[][] in fun3() : \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return (int(*)[ROW][COL])c;
}