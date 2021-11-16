#include<stdio.h>

void main()
{

    int stock=100, order;
    char credit;

    printf("Enter the customer order: ");
    scanf("%d", &order);

   
    


    if(order<=stock ) 
        printf("order : %d",order);

    
    else if(order>stock)
        printf("stock = %d",stock);

    
    else
        printf("first clear your credit");
}