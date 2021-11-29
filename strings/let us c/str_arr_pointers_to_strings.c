#include<stdio.h>
#include<string.h>

void main()
{
    char *names[] = {
                        "akshay",
                        "parag",
                        "raman",
                        "srinivas",
                        "puroo",
                        "rajesh" 
                    };

    char *temp;
    printf("Original : %s  %s\n", names[1], names[4]);
    temp=names[1];
    names[1]=names[4];
    names[4]=temp;
    printf("New : %s %s", names[1], names[4]);
}