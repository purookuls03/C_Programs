#include<stdio.h>
void main()
{
    struct book
    {
        char name[25];
        char author[25];
        int callno;
    };
    struct book b1 = {"let us C", "YPK", 101};
    struct book *ptr;
    ptr=&b1;
    printf("%s  %6s  %4d", b1.name, b1.author, b1.callno);
    printf("\n%s  %6s  %4d", ptr->name, ptr->author, ptr->callno);
}