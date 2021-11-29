//WAP to make a triangle defined by user
//C is fun

#include<stdio.h>

void main()
{
	int rows;
	int a, b;

	printf("Enter the number of rows for right triangle :  \n");
	scanf("%d", &rows);

	for (a=0;a<rows;a++)
	{
		for (b=0;b<=a;b++)
		{
			printf(" * ");
		}
	 printf("\n");
	}

}
