//WAP in C to display n terms of natural number and their sum.
//C is fun

#include<stdio.h>


void main()
{
	int a, b, sum;
	
	printf("Enter the last natural number you wanna add :  \n");
	scanf("%d", &a);

	for (b=1;b<=a;b++)
	{
		printf("%d", b);
		sum+=b;
	}
	
	printf("\n%d", a, sum);
}
