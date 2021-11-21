#include<stdio.h>

void main()
{
    int array[10], position, i, num;
    printf("Enter number of elements in array : \n");
    scanf("%d", &num);

    printf("Enter %d elements \n", num);
   
    for(i=0;i<num;i++)
     {
        scanf("%d", &array[i]);
     }

    printf("Enter the location where you want to delete element from:  ");
    scanf("%d", &position);

    if(position>=num+1)
       {
        printf("Deletion not possible \n");
       }
    else
       {
          printf("\n");
       } 
        
        for(i=position-1;i< num-1;i++)
       {
         array[i] = array[i+1];
       }
    
    printf("Resultant array is: ");
   
    for(i=0;i<num-1;i++) 
     {
        printf("%d  ", array[i]);
     }
   
   
}
