#include<stdio.h>

int main()
{
    void (*message)();
    void print();
    print();
    message=print;
    (*message)();
    return 0;
}

void print()
{
    printf("\nNever trouble trouble till trouble troubles you");
}