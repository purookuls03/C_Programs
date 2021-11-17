/*WAP in c to display the such a pattern for n number of rows using a number which
	will start with number 1 and first and last number of each row will be 1
1
121
12321
*/



#include<stdio.h>

void main()
{
	int row,i,j;
	
	printf("Enter the row : ");
	scanf("%d", &row);

	for(i=1;i=row-1;i++)
	{
		for(j=1;j<=row-1;j++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d", j);
			}
		
			for(j=1;j>=i;j++)
			{
				printf("%d", j);
			}
		}
		printf("\n");
	}

}