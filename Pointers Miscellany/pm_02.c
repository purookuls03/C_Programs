#include<stdio.h>

int main()
{
    int display();
    int (*func_ptr)();
    func_ptr=display;
    printf("Address of function display is : %u\n", func_ptr);
    (*func_ptr)();;
    return 0;
}
int display() 
{
    printf("long live viruses!!\n");
    return 0;
}