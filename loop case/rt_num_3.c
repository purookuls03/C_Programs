//WAP in c to display the pattern repated "num" like right angle which number is increased by 1
/*
1
2 3
4 5 6	
7 8 9 10
*/



#include<stdio.h>

void main()
{
	int row,i,j,count=1;
  
	printf("Input number of rows : ");
	scanf("%d", &row);
   
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ", count);
			count++;
		}
	
	printf("\n");
	
   }
	
	


}