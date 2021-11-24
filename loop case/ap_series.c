//WAP c program to find out the sum of an A.P. series
// Sum of series = n/2(2a+(n-1)d)


#include<stdio.h>

void main()
{
	int num,cd,num_term,i,sum=0,temp=0,a,b;
	
	printf("Enter the first number of  a.p series : ");
	scanf("%d", &num);
	
	printf("Enter the n numbers of a.p series : ");
	scanf("%d", &num_term);
	
	printf("Common difference of a.p series : ");
	scanf("%d", &cd);
	
	temp=num+num_term*cd;
	
	printf("%d + ", num);
	
	/*a=num+cd;
	//b=num+num_term*cd;
	
	for(i=a;i<temp;i++) 
	{
		printf("%d + ", i);
	}*/
	
	sum = (num_term*( 2*num+(num_term-1)*cd)) /2;
	printf("\nsum = %d ", sum);
}