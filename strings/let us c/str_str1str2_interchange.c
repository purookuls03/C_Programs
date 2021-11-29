#include<stdio.h>
#include<string.h>

void main()
{
    char *str[]={
                    "We will teach you how to...",
                    "Move a mountain",
                    "Level of building",
                    "Erase the past",
                    "Make a million",
                    "...all through C!"
                };
        
    char str1[10],str2[10],str3[10];
    int i,temp;
    printf("Enter the word which you replace : ");
    gets(str1);

    printf("Enter the word to replace with str1 :");
    gets(str2);

    for(i=0;i<6;i++)
    {
        // printf("%s\n", str[i]);
        if (str[i]==str1)
		{
		 temp=1;
		// break;
		}
        break;
    }

   strcpy(str1,str2);
    // printf("%s\n", strcpy(str1,str2));

    // if(temp!=1)
    //     printf("%s\n", str1);
    // else
    //     printf("else = %s", str1);

    for(i=0;i<6;i++)
    {
        if(temp!=1)
            printf("%s\n", str[i]);
    }
    

}