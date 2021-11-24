#include<stdio.h>

void main()
{
    int working_hours, over_time;
    float otp;
	int coun=1;

    while(count<=10)
    {
        printf("Enter the working hours %d: ", count);
        
		scanf("%d", &working_hours);
        
		if(working_hours>40)
        {
            over_time=working_hours-40;
            
			otp= over_time*12.00;
            
			printf("overtime pay : %d\n", otp);
        }
        
		else
            printf("You have to work for more than 40 hours to get over time pay");

       
	   count++;
    }
}