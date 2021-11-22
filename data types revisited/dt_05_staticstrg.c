/*
    /*
#   Register storage class :
#       Storage :- Memory
#       Deafult initial value :- Zero
#       Scope :- locally defined to the block
#       life :- Value of the variable persistes between different function calls

#   The difference between auto and static variables is, static variables 
    don't disappear when the function is no longer active. if the control comes    
    back to the same function again, the static variables have same value they had last time.

*/

/*#include<stdio.h>

void main()
{
    static int a;
    for(a=1;a<=3;a++)
    {
        printf("%d\n", a);
    }
}*/

#include<stdio.h>

int *fun();

void main()
{
    int *j;
    int *fun();
    j=fun();
    printf("%d\n", *j);

}

int *fun()
{
    static int k=35;
    return ( &k );
}