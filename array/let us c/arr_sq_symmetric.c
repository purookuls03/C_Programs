#include<stdio.h>

void main()
{
    int arr[2][2]={
                    {1,2},
                    {3,4}
                };

    int i,j,*temp;
    int m=2,n=2;

    arr[m][n]=arr[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr[i][j]=arr[i][j]*arr[i][j];
            printf("%d \n", arr[i][j]);
           
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(arr[m][n]==arr[i][j])
            {
                printf("It is a symmetric matrix\n");
                break;
            }
            else
            {
                printf("It is not a symmertric matrix");
                break;
            }
            break;
        }
        break;
    }    
}

