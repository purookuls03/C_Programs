#include<stdio.h>

void main()
{
	int hardness,tensile;
	float carbon;
	
	printf("Enter the hardness of steel : ");
	scanf("%d", &hardness);
	
	printf("Enter the tensile of steel : ");
	scanf("%d", &tensile);
	
	printf("Enter the carbon of steel : ");
	scanf("%f", &carbon);
	
	
	
	
	if (hardness>50 && carbon<0.7 && tensile>5600)
		printf("Grade 10");
	
	else if (hardness>50 && carbon<0.7 || tensile>5600)
		printf("Grade 9");
		
	else if (hardness>50 || carbon<0.7 && tensile>5600)
		printf("Grade 8");
		
	else if (hardness>50 && tensile>5600 || carbon<0.7)
		printf("Grade 7");
		
	else if (hardness>50 || carbon<0.7 || tensile>5600)
		printf("Grade 6");
		
	else 
		printf("Grade 5");
		
}