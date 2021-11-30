#include<stdio.h>

int main()
{
    int display();
    printf("Address of function display is %u\n", display);
    display();
    return 0;
}
int display()
{
    printf("long live viruses!!\n");
    return 0;
}