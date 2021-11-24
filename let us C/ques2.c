#include<stdio.h>

void main()
{
    float km, m, cm, f, in;
    
	printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    
	m = km * 1000;
	printf("The distance in Meters: %0.2f\n", m);
	
	cm = km * 1000 * 100;
    printf("The distance in Centimeters: %0.2f\n", cm);
    
	f = km * 3280.84;
	printf("The distance in Feet: %0.2f\n", f);
	
    in = km * 39370.08;
     printf("The distance in Inches: %0.2f\n", in);

	   
    
}