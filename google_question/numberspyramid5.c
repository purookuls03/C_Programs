/*Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row
C is fun    */

#include<stdio.h>

void  main()
{
	int rows;
	int a, b;

	printf("Enter any rows : ");
	scanf("%d", &rows);

	for (a=0;a<rows;a++)
	{
	   	
		for (b=0;b>=rows;b--)
		{
			printf(" ");
		}
		for (b=1;b<=a;b++)
		{
			printf(" %d", a);
		}
	               printf("\n");
		rows--;	
	}

}