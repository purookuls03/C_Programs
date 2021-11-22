/*
#   Register storage class :
#       storage :- CPU registers
#       Deafult initial value :- Garbage value
#       Scope :- locally defined to the block
#       life :- untill the that local block ends

#    CPU register can always be accessed faster the one that is stored in memory
*/

#include<stdio.h>

void main()
{
    register int a;
    for(a=1;a<=10;a++)
        printf("%d\n", a);
}

/*
#   Here we decalre the class of 'a' as register, we cannot say for sure 
    the value of 'a' would be register in a CPU register.      (why?)
    Because the number of CPU register are limited, and they may be doing 
    some other task.

#   

*/