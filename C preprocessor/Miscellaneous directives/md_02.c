// #include<stdio.h>

#pragma warn +rvl           //return value
#pragma warn +par           //parameter not used
#pragma warn +rch           //unreachable code

int f1()
{
    int a=5;
}

int f2()
{
    printf("inside f2\n");
}

int f3()
{
    int x=6;
    return x;
    x++;
}

void main()
{
    f1();
    f2(7);
    f3();

}