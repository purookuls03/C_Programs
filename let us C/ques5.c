#include<stdio.h>

void main()
{
	int length,breadth,area_rectangle,perimeter_rectangle,rad,area_circle,circumference_circle;;
	  
    
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);
	area_rectangle  = length * breadth;    
	perimeter_rectangle = 2 * (length + breadth); 


	printf("Enter the radius of circle: ");
    scanf("%d", &rad);
	area_circle = 3.14 * rad * rad;   
    circumference_circle = 2 * 3.14 * rad;
       
	
	printf("area of reactangle : %d\n", area_rectangle);
	
	printf("perimeter of reactangle : %d\n", perimeter_rectangle);
	
	printf("area of circle : %d\n", area_circle);
	
	printf("circumference of circle : %d", circumference_circle);
	
     
      
}