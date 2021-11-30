#include<stdio.h>
#include<string.h>
void main()
{
    char *name[]=  {
                        "santosh",
                        "amol",
                        "santosh jain",
                        "kishore",
                        "rahul",
                        "amolkumar",
                        "hemant"
                    };

    int i,j;
    char *temp[25];
    
    for(i=0;i<7;i++) 
    {
        
        for(j=0;j<7;j++) 
        {
            
            if(name[i] < name[j]) 
            {
                
                *temp=name[j-1];
                        
                name[j-1]=name[j];
                        
                name[j]=*temp;
                  
                
            }
            
        }  
        
    }

    for(i=0;i<7;i++)
    {
        printf("%s\n", name[i]);
    }

}