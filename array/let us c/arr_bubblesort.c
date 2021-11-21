#include<stdio.h>

void main()
{
    int arr[5]={44,33,55,22,11};;
    int i,j,temp;

    for(i=0;i<5;i++)
	{
			for(j=i+1;j<=5;j++)
			{
				if(arr[i]>arr[j])
				{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
                // break;
				}
                // break;
				// printf("inside j loop Ascending order :  %d\n\n", arr[i]);
			}
            // break;
    }

    for(i=0;i<5;i++)
	{
		printf("Selection sort order :  %d\n", arr[i]);
	}

}