#include<stdio.h>
#include<math.h>

void main()
{
    int len,area_sq,length;
    printf("Enter the length of the side of the square : ");
    scanf("%d", &len);
    // len=5;

    area_sq = square(len);                   //Calling

    printf("Area of the square is %d\n", area_sq);

}


int square(int length)
{
    int area_sq;
    area_sq=pow(length, 2);     
    // printf("%d\n", area_sq);         
    return area_sq;
    
}