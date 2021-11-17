//wap to check whether a number is prime or not

#include<stdio.h>

void main()
{
	int num,prime=0,i;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for (i=2;i<=num;i++) 
	{
		if (num%i==0)
		{
			prime++;
			break;
		}
		
	}

	if (prime==1)
      printf("prime number", num);
    else
      printf("not a prime number.", num);
	

}