#include <stdio.h>

void  main()
{
	int a[5],i,num,temp;
	
   
	printf("Enter elements in array : ");
    
	for(i=0; i<5; i++)
	{
   		scanf("%d", &a[i]);
	}
     
	printf("	Enter the searching number : ");
	scanf("%d", &num);
     
	for(i=0; i<5; i++)
    	{
        		printf("    %d\n", a[i]);
		if (a[i]==num)
		{
		 temp=1;
		// break;
		}
		

	}
		
	if(temp==1)
	printf("	Number is present");

	else
	printf("	Number is absent");
	
	
	
	
            	
}