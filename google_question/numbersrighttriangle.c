/*Write a program in C to display the pattern like right angle triangle with a number
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
	   	
		for (b=1;b<=a;b++)
		{
			printf("%d", b);
		}
		
	               printf("\n");
		
	}

}