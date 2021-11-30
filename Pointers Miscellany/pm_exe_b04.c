#include<stdio.h>

void show(int,float);
int main()
{
    void (*s)(int,float);
    s=show;
    (*s)(10,3.14);
    return 0;
}
void show(int i,float f)
{
    printf("\n%d %f", i, f);
}