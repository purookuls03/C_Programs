#include<stdio.h>
#include<string.h>
void main()
{
    char s[80],s2[80],s3[80];
	int i,j,temp;
	printf("Enter the string : ");
	gets(s);
	// printf("string entered by user : %s", s);

    for(i=0;i<80;i++)
	{
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
           s[i]=0;
		}
        
	}

    for(i=0;i<80;i++)
	{
        if(s[i]!=0)
        {
            s2[i]=s[i];
            // printf("s2 = %c\n", s2[i]);
            
        }
        
    }

    strcpy(s,s2);
    printf("s2 = %s\n", s);
   

    
}