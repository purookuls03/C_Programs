//WAP in c to finnd the sum of gp series
//Sn = a(1–r^n+1)/(1 – r) 
//not complete

#include<stdio.h>
#include<math.h>

void main()
{
	int num,cr,num_term,i,sum=0,temp=0,a,b;
	
	printf("Enter the first number of  g.p series : ");
	scanf("%d", &num);
	
	printf("Enter the n numbers of g.p series : ");
	scanf("%d", &num_term);
	
	printf("Common ratio of a.p series : ");
	scanf("%d", &cr);

	sum = num * pow(cr, num_term-1);

	num=num*cr;
	
	for(i=num;i<num_term;i++)
	{
		printf("%d + ", i);
	
	}
	
	
	
	printf("%d", sum);
	
	
}