//WAP in c to display the pattern "num" like right angle

#include<stdio.h>

void main()
{
	int row,i,j,count=1;
	
	printf("Enter the number : ");
	scanf("%d", &row);
	
	for(i=1;i<=row;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d", j);
			
		}
		
		printf("\n");
	
	}


}