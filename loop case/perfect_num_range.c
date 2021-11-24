//WAP a c to find the perfect numbers with a given number of range

#include<stdio.h>

int perfect(int num,int num_2)
{
	int i,j,sum=0;

	for(i=num;i<=num_2;i++)
	{
		
			if(num_2%i==0)
			{
				sum=sum+i;
				i++;
				printf("inside j loop sum = %d \n", sum);
			}
			printf("outside i loop sum = %d \n", sum);
			printf("inside i loop i = %d \n", i);
	}	
		
		if(sum==i)
		{
			return 1;
		}
		
		else
		{
			return 0;
		}
	

}

void main()
{
	int start_num,end_num,i,sum=0,num,num_2,perfect_num;
	
	printf("Enter the start range of number : ");
	scanf("%d", &start_num);
	
	printf("Enter the end range of number : ");
	scanf("%d", &end_num);
	
	
	//printf("start_num = %d\n", start_num);
	//printf("end_num = %d\n", end_num);
	
	perfect(num,num_2);
	
	printf("inside if perfect numbers : %d\n", i);
					
	
	for(i=start_num;i<=end_num;i++)
	{
		
			perfect_num=perfect(num,num_2);
			
			if (perfect_num(i))
			{
					printf("perfect numbers : %d\n", i);
					
			}
		printf("inside loop perfect numbers : %d\n", i);
		
		
	}
}

