/* The intricacies of structures */

#include<stdio.h>

void main()
{

/*  the deccalreation of structure type and structure variable */      

    struct player               
    {                                               
        char name[20];
        int age;
    };
    struct player p1 = {"Nick Yates", 30};
    printf("%s  %9d", p1.name, p1.age);

    
    //    is same as.........
    
    struct player2
    {
        char name[20];
        int age;
    }p2 = {"Nick Yates", 30};
    printf("\n%s  %9d", p2.name, p2.age);

    //  or even..........

    struct
    {
        char name[20];
        int age;
    }p3 = {"Nick Yates", 30};
    printf("\n%s  %9d", p3.name, p3.age);

    
    
    /*  The value of one structure can be assigned to anothe structure variable of the same type */

    struct player3
    {
        char name[20];
        int age;
    };
    struct player p4,p5={"Nick Yates", 30};
    p4=p5;
    printf("\n%s  %9d", p4.name, p4.age);
    printf("\n%s  %9d", p5.name, p5.age);

};
