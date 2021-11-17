//WAP in c to display the sum of the series
// 1 11 111 1111 11111 = 12345

#include<stdio.h>

void main()
{
	int num,i,sum=0,temp=1;
	
	printf("Enter the n term : ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++)
	{
		sum=sum+temp;
		printf("%d ", temp);
		temp=temp*10+1;
	}
	
	printf("\nsum = %d", sum);


}