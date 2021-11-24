#include<stdio.h>

void main()
{
    int hindi, math, english, science, sst, total;
    float percentage;
    
	printf("Enter the marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks of Math: ");
    scanf("%d", &math);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    printf("Enter the marks of sst: ");
    scanf("%d", &sst);

    total = hindi+math+english+science+sst;
	percentage = total/5;

    printf("Aggregate marks: %d\n", total);
    
	printf("Percentage marks: %0.2f \n", percentage);
    
}