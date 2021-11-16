#include<stdio.h>

int prime_factors(int num)
{
   int pf, i;

   for (i=2;i<num;i++)
   	{
     	if(num%i==0)
        {
   			pf = 1;
			
			if(pf==1)
			{
				printf("prime factor = %d\n", i);
                //  return i;
                
			}	
        }

        
    }
        // printf("prime factor = %d\n", i);
    return 0;
}

void main()
{
    int num, pf, i, prime_factor;

    printf("Enter the number : ");
    scanf("%d", &num);

    prime_factors(num);

    for(i=2;i<=prime_factor;i++)
    {
        printf("pf =  %d\n", i);
         
    }
}