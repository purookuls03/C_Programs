#include<stdio.h>
void main()
{
    enum status {pass,fail,atkt};
    enum status stud1,stud2,stud3;
    stud1=pass;
    stud2=atkt;
    stud3=fail;
    printf("%d  %d  %d\n", stud1, stud2, stud3);}