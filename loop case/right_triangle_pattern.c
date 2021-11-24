//WAP in c to display the pattern * like right angle

#include<stdio.h>

void main()
{
	int row,i,j;
	
	printf("Enter the number : ");
	scanf("%d", &row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	
	}


}