#include<stdio.h>

void main()
{
    int arr[5][5] = {
                        {1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,66,22,99,33},
                        {77,44,88,12,55},
                        {50,29,53,84,17}
    
                    };
    int i,j,*max;
    
    max=arr[0][0];
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\n", arr[i][j]);

            if(max>arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }

    printf("largest number in array : %d\n", max);

}