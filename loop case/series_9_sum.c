//WAP in c to display the sum of the series
// 9 99 999 9999 99999 = 111105

#include<stdio.h>

void main()
{
	int num,i,sum=0,temp=9;
	
	printf("Enter the n term : ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++)
	{
		sum=sum+temp;
		printf("%d ", temp);
		temp=temp*10+9;
	}
	
	printf("\nsum = %d", sum);


}