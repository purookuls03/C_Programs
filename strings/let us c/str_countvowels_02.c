#include<stdio.h>
#include<string.h>
void main()
{
    char s[80];
    int i,count=0;

    printf("Enter the string : ");
	gets(s);

    for(i=0;i<80;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
            {
                count++;
            }
        }
    }

    printf("%d", count);
}