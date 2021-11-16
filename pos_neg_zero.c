//WAP to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered
#include<stdio.h>

void main()
{
	int arr[100],size,num,positive=0,negative=0,zero=0,i;
    
   
    printf("Enter the size of array : ");
    scanf("%d", &size);

	printf("Enter the numbers : \n");
	for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(i=0;i<size;i++)
    {
       
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else 
        {
            zero++;
        }
        
    }
   
	printf("Total positive Numbers: %d\n", positive);
    printf("Total negative Numbers: %d\n", negative);
    printf("Total zero Numbers: %d\n", zero);
}