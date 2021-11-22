#include<stdio.h>

float product(int num1,float num2);
 
void main()
{
    int num1;
    float num2, into;

    printf("Enter the integer value : \n");
    scanf("%d", &num1);

    printf("Enter the float value : \n");
    scanf("%f", &num2);

    into = product(num1, num2);

    printf("%f\n", into);
    

}

float product(int num1,float num2)
{
    float prod;

    prod = num1 * num2;

    return prod;


}