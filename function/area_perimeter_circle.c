#include<stdio.h>

int area_circle(int rad, float area);
int perimeter_circle(int rad, float peri);

int area_circle(int rad, float area)
{
    
    area=3.14*rad*rad;
    printf("%f\n",area);
    return area;
}

int perimeter_circle(int rad, float peri)
{
    
    peri=2*3.14*rad;
    printf("%f\n",peri);
    return peri;
}

void main()
{
    int rad=5;
    float area,peri,areacircle,pericircle;
    // printf("Enter the radius of circle : ")
    // scanf("%d", &rad);

   areacircle = area_circle(rad, area);
    pericircle = perimeter_circle(rad, peri);

    printf("area of circle : %f\n", areacircle);
    printf("perimeter of circle : %f", pericircle);

}