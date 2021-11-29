// WAP to make pyramid

#include<stdio.h>

void main()
{
	int rows;
	int a, b;

	printf("Enter any rows : ");
	scanf("%d", &rows);

	for (a=0;a<rows;a++)
	{
	   	
		for (b=0;b<=rows;b++)
		{
			printf(" ");
		}
		for (b=0;b<=a;b++)
		{
			printf(" *");
		}
	               printf("\n");
		rows--;	
	}

}