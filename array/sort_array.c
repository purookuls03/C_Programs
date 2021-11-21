//Sorting array in ascnding order

#include<stdio.h>

void main()
{
	int arr[100],size,num,i,j=0,temp;
    
   
    printf("Enter the size of array : ");
    scanf("%d", &size);

	printf("Enter the numbers : \n");
	for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
	
	for(i=0;i<size;i++)
	{
			for(j=i+1;j<size;j++)
			{
				if(arr[i]>arr[j])
				{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
				//printf("inside j loop Ascending order :  %d\n", arr[i]);
			}
			//printf("outside j loop Ascending order :  %d\n", arr[i]);
	}
	//printf("outside i loop Ascending order :  %d\n", arr[i]);
	
	for(i=0;i<size;i++)
	{
			printf("Ascending order :  %d\n", arr[i]);
	}

}