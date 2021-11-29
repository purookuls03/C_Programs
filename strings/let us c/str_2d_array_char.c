#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0
void main()
{
    char masterlist[6][10]={
                                "akshay",
                                "parag",
                                "raman",
                                "srinivas",
                                "puroo",
                                "rajesh"
                            };

    // char *names[]={
    //                             "akshay",
    //                             "parag",
    //                             "raman",
    //                             "srinivas",
    //                             "puroo",
    //                             "rajesh"
    //                         };
    int i,flag,a;
    char yourname[20];

    printf("Enter your name : ");
    gets(yourname);

    flag = NOTFOUND;
    for(i=0;i<=5;i++)
    {
        a=strcmp(*names, yourname);
        if(a==0)
        {
            printf("Welcome, you can enter the palace");
            flag=FOUND;
            break;
        }
    }

    if(flag==NOTFOUND)
        printf("Sorry, we can't allowed you to pass");
}