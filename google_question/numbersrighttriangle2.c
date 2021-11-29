/*Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
C is fun
*/

#include<stdio.h>

void main()
{
	int rows;
	int a, b;

	printf("Enter any rows : ");
	scanf("%d", &rows);
	
	for (a=1;a<=rows;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf(" %d ", a);
		}
	  printf("\n");
	}

}