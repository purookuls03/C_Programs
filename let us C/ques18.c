#include<stdio.h>

void main()
{
	int ram,shyam,ajay;
	
	printf("Enter the age of ram : ");
	scanf("%d", &ram);
	printf("Enter the age of shyam : ");
	scanf("%d", &shyam);
	printf("Enter the age of ajay : ");
	scanf("%d", &ajay);
	
	if(ram>shyam && ram>ajay && shyam>ajay)
		printf("ajay is younger");
	
	else if(ram>ajay && ram>shyam && ajay>shyam)
		printf("shyam is younger");
		
	else
		printf("ram is younger");

}