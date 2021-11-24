//WAP in c to display the pattern repated "num" like right angle
/*
1
22
333	
4444
*/

#include<stdio.h>

void main()
{
	int row,i,j;
	
	printf("Enter the number of rows : ");
	scanf("%d", &row);
	
	for(i=1;i<=row;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d", i);
			
		}
		
		printf("\n");
	
	}


}