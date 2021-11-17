//WAP to print a multiplication table

#include<stdio.h>

void main()
{
	int num,i,res;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i=1;i<=10;i++)
	{
		res=num*i;
		printf("%d * %d = %d\n", num, i, res);
	
	}

}