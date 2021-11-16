#include<stdio.h>

void main()
{
	int ang1,ang2,ang3;
	
	printf("Enter the angle 1 : ");
	scanf("%d", &ang1);
	
	printf("Enter the angle 2 : ");
	scanf("%d", &ang2);
	
	printf("Enter the angle 3 : ");
	scanf("%d", &ang3);
	
	if(ang1+ang2+ang3==180)
		printf("Triangle is valid");
		
	else
		printf("triangle is not valid");


}