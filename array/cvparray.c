#include<stdio.h>

void main()
{
	int a[10], i, insert, pos;

	printf("Enter elemnts in the array : ");
	
	for(i=0;i<5;i++)
	{
	 scanf("%d", &a[i]);
	}

	printf("Enter element to inster in array : ");
	scanf("%d", &insert);

	printf("Enter the position where the varable is inserted : ");
	scanf("%d", &pos);

	for(i=0;i<5;i++)
	{
		  if(i==pos)
		  {	
		   a[i]=insert;
		  }
		else
		{
		 printf(" ");
		}
	}
	
	for(i=0;i<5;i++)
	{
	printf("%d\n", insert);
	}

	
}