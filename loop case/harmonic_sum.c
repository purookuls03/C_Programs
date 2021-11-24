//WAP in c to display the n terms of harmonic series and their sum
// 1 + 1/2 + 1/3 + 1/4 + 1/5 = 2.283334

#include<stdio.h>

void main()
{
	
	float sum=0,num,temp,i;

	printf("Enter the n term : ");
	scanf("%f", &num);
	
	
	for(i=1;i<=num;i++)
	{
		//printf("%f\n", i);
		temp=1/i;
		printf("%f + ", temp);
		sum=sum+temp;
	}
	
	printf("\nsum = %f\n", sum);
	
}