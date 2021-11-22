#include<stdio.h>

int shift_circulary(int a,int b,int c);

void main()
{
    int x,y,z,sc,a,b,c;

    printf("Enter the x value : ");
    scanf("%d", &x);

    printf("Enter the y value : ");
    scanf("%d", &y);
    
    printf("Enter the z value : ");
    scanf("%d", &z);

    shift_circulary(x, y, z);

    printf("x = %d  ,  y = %d  ,  z = %d\n", y, z, x);
    

}

int shift_circulary(int a,int b,int c)
{
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;

   return 0;


}