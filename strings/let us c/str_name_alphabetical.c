#include<stdio.h>
#include<string.h>
void main()
{
    char *str[]={
                    "Nikhil Sharma",
                    "Harsh bains",
                    "Vivek singh",
                    "Puroo Kulshrestha"
                };
    
    
    int i,j,temp;

    for(i=0;i<5;i++)
    {
        for(j=(i+1);j<5;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                
                str[i]=str[j];
                
                str[j]=temp;
                
                
            }
            // printf("temp = %s\n",temp);
            // printf("inside loop str[j] = %s\n", str[j]);
            // printf("str[i] = %s\n", str[i]);
            
        }
    
        
    }

    // printf("str[i] = %s\n",str[i]);
    // printf("str[j] = %s\n", str[j]);

    for(i=0;i<5;i++)
    {
        printf("Alphabetical order : %s\n", str[i]);
    }

}