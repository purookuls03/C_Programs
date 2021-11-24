#include<stdio.h>
#include<math.h>

void main()
{
	int num,temp,arr[100],i=0,count,temp2,sum=0,count2=0;
    
	printf("Enter the number : ");
    scanf("%d",&num);
    
    
	while(num>0) 
    {
        temp=num%10;  
        
		printf("inside loop : %d\n", temp);
		
		arr[i]=temp;
    
        num=num/10;    

		i++;
    }
	
	for(count=0;count<=i-1;count++)
	{		
		printf("array1 : %d\n", arr[count]);
		
	}
	
	printf("\narr[i-1] = %d\n", arr[i-1]);
	printf("i = %d\n", i);
	printf("arr[0] = %d\n", arr[0]);
	
	temp2=arr[0];
	arr[0]=arr[i-1];
	arr[i-1]=temp2;
	
	/*printf("\narr[i] = %d\n", arr[i-1]);
	printf("temp = %d\n", temp2);
	printf("arr[0] = %d\n", arr[0]);*/
	
	
	for(count=0;count<=i-1;count++)
	{		
		printf("array2 : %d\n", arr[count-1]);
		
	}
	
	/*printf("\n\narr[i] = %d\n", arr[i-1]);
	printf("temp = %d\n", temp2);
	printf("arr[0] = %d\n", arr[0]);*/
		
	
	for(count=i-1;count>=0;count--)
	{
			 sum=sum+arr[count]*(pow(10, count2));
			 count2++;
			 
			 printf("inside loop sum = %d\n", sum);
			 //count2++;
	}
		printf("sum = %d\n", sum);
	
	
}