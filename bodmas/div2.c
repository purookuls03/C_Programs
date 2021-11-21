// divide any two numbers by user

#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the first value a \n");
	scanf("%d", &a);

	printf("Enter the second value b \n");
	scanf("%d", &b);
	
	c=a/b;
	printf("Divide of a by b is %d", c);
	return 0;
}