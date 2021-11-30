#include<stdio.h>
#include<string.h>
void main()
{
    struct 
    {
        int num;
        float f;
        char mess[50];
    }m;
    m.num=1;
    m.f=3.14;
    strcpy(m.mess,"Puroo kulshrestha");
    printf("\n%u    %u    %u", &m.num, &m.f, m.mess);
    printf("\n%d    %f    %s", m.num, m.f, m.mess);

}