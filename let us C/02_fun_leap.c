#include<stdio.h>

int leap1(int yr)
{
    return yr%4==0;
}

int leap2(int yr)
{
    return yr%100==0;
}

int leap3(int yr)
{
    return yr%400==0;
}

void main()
{
    int yr;
    printf("Enter the year : ");
    scanf("%d", &yr);

    if (leap1(yr))
        printf("It is a leap year");
    else if(leap2(yr))
        printf("It is a leap year");
    else if(leap3(yr))
        printf("It is a leap year");
    else 
        printf("It is not a leap year");

}