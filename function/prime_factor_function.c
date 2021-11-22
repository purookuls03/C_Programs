#include<stdio.h>


int prime_factor(int num);

void main()
{
    int num,pf,i;

    printf("Enter the number : ");
    scanf("%d", &num);
    pf = prime_factor(num);

    for(i=2;i<=pf;i++)
    {
       
        // printf("%d\n", i);
    }
}

int prime_factor(int num)
{
    int pf, i;

   for (i=2;i<num;i++)
   	{
        if(num%i==0)
        {
            printf("prime_factor = %d\n", i);
           
        }

        //    return (num%i==0);
     	// if(num%i==0)
        // {
   		// 	printf("prime factor = %d\n", i);
        // //  return i;
            	
        // }
    }
        // printf("prime factor = %d\n", i);
    // return 0;

     return i;


}