/*
#   Register storage class :
#       storage :- Memory
#       Deafult initial value :- Zero
#       Scope :- Global
#       life :- As long as as the program execution doesn't come to end
*/

#include<stdio.h>

int i;
void increment();
void decrement();

void main()
{
    printf("i=%d\n", i);
    increment();
    increment();
    decrement();
    decrement();
    
}

void increment()
{
    i+=1;
    printf("on increment i = %d\n", i);
}

void decrement()
{
    i-=1;
    printf("on decrement i = %d\n", i);
}