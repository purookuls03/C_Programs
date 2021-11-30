#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0

void main()
{
    char masterlist[6][10]= {
                                "akshay",
                                "parag",
                                "raman",
                                "srinivas",
                                "gopal",
                                "rajesh"
                            };

    int i,flag,a;
    char yourname[10];
    printf("Enter your name : ");
    scanf("%s", yourname);
    flag=NOTFOUND;
    
    for(i=0;i<=5;i++)
    {
        a=strcmp(&masterlist[i][0],yourname);
        if(a==0)
        {
            printf("welcome, you can enter the palace");
            flag=FOUND;
            break;
        }
    }

    if(flag==NOTFOUND)
    {
        printf("Sorry, you are a trespasser");
    }

}