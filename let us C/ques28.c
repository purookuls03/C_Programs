#include<stdio.h>

void main()
{
    int hours;
    printf("Input the time taken by worker: ");
    scanf("%d", &hours);

    if(hours>=2 && hours<=3)
        printf("Worker is highly efficient");
    
	else if(hours>3 && hours <=4)
        printf("Worker needs to improve speed");
    
	else if(hours>4 && hours <=5)
        printf("Give training to worker");
    
	if(hours>5)
        printf("Worker is terminated");

    
}