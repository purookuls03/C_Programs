#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int prime(int num)
{
	int i, flag=0;
	printf("outside for num=%d\n", num);
    	for(i=2;i<num;i++)
	{
		printf("outside if num=%d, i=%d\n", num, i);
		
	  if ( num%i==0)
	  {
		flag=1;
		printf("inside if num=%d, i=%d\n", num, i);
		break;
	  } 
	}
	if (flag==0)
	return 1;
	else
	return 0;
	
}

void main()
{
	int num, res=-1;
	
	printf("Enter the prime number\n");
	scanf("%d",&num);
	
	res=prime(num);
	printf("res=%d\n", res);
	
	if(res==1)
		printf("%d is prime number\n", num);
	else
		printf("%d is not prime number", num);
	
}