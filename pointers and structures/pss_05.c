/*  Passing address of a structure of a variable to a function  */

#include<stdio.h>

struct book
{
    char name[25];
    char author[25];
    int callno;
};

void main()
{
    void display(struct book*);
    struct book b1 = {"let us C", "YPK", 101};
    display(&b1);
}
void display(struct book *b)
{
    printf("%s\n%s\n%d", b->name, b->author, b->callno);
}