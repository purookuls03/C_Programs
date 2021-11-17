// WAP to make a triangle using loop
//C is fun


#include<stdio.h>

void main()
{
	int rows;
	int a, b;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for (a=0;a<rows;a++)
	{
	  for(b=0;b<=a;b++)
	           {
		printf("*");
	           }
	  
	printf("\n");	
	}
	
	
}
