/*Write a program in C to make such a pattern like right angle triangle with number increased by 1
C is fun
*/

//incomplete*

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
			printf("%d", b++);
	
		 printf("\n");
		}
	}


}