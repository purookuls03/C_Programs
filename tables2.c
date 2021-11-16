//WAp to make tables of number by using loop
//C is fun

#include<stdio.h>

int main()
{
	int a, b;
	int c;

	printf("enter any number a : \n");
	scanf("%d", &a);
	
	b=1;

	while (b>=10)
	{
		printf("c=a*b");
		printf("%d\n", c);
		b++;

	}
	
	return 0;
}