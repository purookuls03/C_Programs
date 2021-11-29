/* WAP n C to read 10 numbers from keyboard and find their sum and average. */
//C is fun

#include<stdio.h>

void main()
{
	int a, b,  sum;

	printf("Input yours ten numbers : \n");

	for (a=1;b<=10;a++)
	{
		printf("Number->%d : ", a);
		
		scanf("%d", &b);	
		sum+=b;
	}
		printf("%d\n", sum);
}