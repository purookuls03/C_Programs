//Given a year, determine whether it is a leap year. 
//If it is a leap year, print the True, otherwise print False.

//C is fun

#include<stdio.h>

void main()
{
	int n,i,a;
	
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter the year \n");
		scanf("%d", &a);
	}

	for(i=1;i<=a;i++)
	{
		if((a%4)==0)
			{
				if((a%100)==0)
				{
					if((a%400)==0)
					{
						printf("yes\n");
					}
				}
			}
		else if((a%100)==0)
		{
			{
				if((a%400)==0)
				{
					printf("yes\n");
				}
			}
		}
		else if((a%400)==0)
			printf("yes\n");
		else 
			printf("no\n");
	}

}