#include<stdio.h>
#include<string.h>

void main()
{
    char *name[]= {
                        "akshay",
                        "parag",
                        "raman",
                        "srinivas",
                        "gopal",         
                        "rajesh"
                    };
    char *temp;
    int i;
    temp=name[2];
    name[2]=name[3];
    name[3]=temp;
    printf("\nname[2] : %-4s      name[3] : %s", name[2], name[3]);



}