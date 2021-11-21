#include<stdio.h>

void main()
{
    int arr[25]={1,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,500,1000,1500,2000};
    int i,num,temp;

    printf("Enter any number : ");
    scanf("%d", &num);

    

    for(i=0;i<25;i++)
    {
        if(arr[i]==num)
        {
            temp=0;
        }
        
    }

    if(temp==0)
        printf("Number is present");
    else
        printf("Number is not present");


}