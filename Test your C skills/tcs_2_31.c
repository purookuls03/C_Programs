#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number 0 or 1 : ");
    scanf("%d",&a);
    switch (a)
    {
        case 0:
            printf("x is equal to zero");
            break;
        case 1:
            printf("x is equal to one");
            break;
        default:
            printf("you entered a wrongb number");
    }
    // printf("Programmers never die");
}