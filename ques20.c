#include<stdio.h>

void main()
{
		int length, breadth, area_rectangle, perimeter_rectangle;
	  
    
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    
	printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);
	
	area_rectangle=length*breadth;    
	perimeter_rectangle=2*(length + breadth); 

	printf("area of reactangle : %d\n", area_rectangle);
	printf("perimeter of reactangle : %d\n", perimeter_rectangle);

	if(area_rectangle>perimeter_rectangle)
		printf("area of the rectangle is greater than its perimeter");
	else
		printf("area of rectangle is smaller than its perimeter");
}