//INCOMPLETE
#include<stdio.h>
#include<string.h>
void main()
{
    char *str="Working with a string is fun";
    int i,pos,a;
    // printf("%d\n", strlen(str));
    
    printf("Enter the position : ");
    scanf("%d", pos);
    
   
    printf("%s", *str);
    for(i=pos;i<=28;i++)
    {
        printf("%s", str[i]);
    }
}