#include<stdio.h>
#include<math.h>

void main()
{
	int num,temp,arr[100],i=0,count,temp2,sum=0,count2;
    
	printf("Enter the number : ");
    scanf("%d",&num);
    
    while(num>0) 
    {
        temp=num%10;  
        
		printf("inside loop : %d\n", temp);
		
		arr[i-1]=temp;
    
        num=num/10;    

		i++;
    }
	
	/*printf("i=%d\n\n", i);
	printf("a[i]=%d\n", arr[i]);
	printf("a[i-1]=%d\n", arr[i-1]);*/
	
	temp2=arr[0];
	arr[0]=arr[i-1];
	arr[i-1]=temp2;
	
	
	/*printf("\n\narr[i] = %d\n", arr[i-1]);
	printf("temp = %d\n", temp2);
	printf("arr[i] = %d\n", arr[0]);*/
	
	for(count=0;count<=i-1;count++)
	{		
		printf("array : %d\n", arr[count]);
		
		
	}
	
	
	for(count=count2-1;count>=0;count--)
	{
			 sum=sum+arr[count]*(pow(10, count2));
			 
			 printf("inside loop sum = %d\n", sum);
			count2++;
	}
		printf("sum = %d\n", sum);
	
	
}