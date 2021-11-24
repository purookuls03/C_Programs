//wap to print the prime numer 1 to n


#include<stdio.h>

int prime(int num_2)
{
    int i,prime_num=0;
    
    for(i=2;i<=(num_2-1);i++)
    {
        if(num_2%i==0)
		{
            prime_num=1;
			break;
			
        }
		
		//printf("inside for loop prime_num : %d\n", prime_num);
		//printf("inside for loop num_2 : %d\n", num_2);
		
	}
    
	//printf("outside for loop prime_num : %d\n", prime_num);
	//printf("outside for loop num_2 : %d\n", num_2);
	
	if(prime_num)
	{		
		return 0;
	}
    else
	{
		return 1;
	}
}
 
void main()
{
    int i,num,prime_check;
 
    printf("Enter the value of : ");
    scanf("%d",&num);
	
	prime_check=prime(num);
 
	for(i=2;i<=num;i++)
    {
        if(prime(i))
		{
            printf("%d\n", i);
		}
		
		//printf("inside loop i = %d\n", i);
    }
     
    
}

	
	
