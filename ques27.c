#include <stdio.h>

void main()
{
    int a,b,c;
	
	printf("Enter first side of triangle: \n");
	scanf("%d", &a);
	
	printf("Enter second side of triangle: \n");
	scanf("%d", &b);
	
	printf("Enter third side of triangle: \n");
	scanf("%d", &c);

    if(a==b && b==c) 
    {
		printf("Equilateral triangle.");
    }
    else if(a==b || a==c || b==c) 
    {
		printf("Isosceles triangle.");
    }
    else 
    {
		printf("Scalene triangle.");
    }

    
}