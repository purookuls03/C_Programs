//wap in c to enter a number an print it in words

#include <stdio.h>
#include<math.h>

void main()
{
    int num,temp,sum,power=1,count=0,i;

    printf("Enter number = ");
    scanf("%d", &num);
	
	
	for(i=num;i>0;i--)
	{    
		
		num=num%10;
		power=num0*pow(10,i);
		temp=num+power;
		num=num/10;    
	}   
	
	
	
	
	while(temp!=0)
	{
		switch(temp%10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
				
			
        }
        
        temp=temp/10;
		
		//printf("num=%d", num);
		
	}
	
}