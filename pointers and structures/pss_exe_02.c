#include<stdio.h>
#include<malloc.h>

struct a
    {
        struct a *next;
        int data;
    };

void main()
{
    struct a *ptr[3];
    int i;
    ptr[0]=(struct a *)malloc(sizeof(struct a));
    ptr[1]=(struct a *)malloc(sizeof(struct a));
    ptr[2]=(struct a *)malloc(sizeof(struct a));
    ptr[0]->data=10;
    ptr[1]->data=20;
    ptr[2]->data=50;
    ptr[0]->next=ptr[1];
    ptr[1]->next=ptr[2];
    ptr[2]->next=NULL;

    while(ptr[0]!=NULL)
    {
        printf("%d\n", ptr[0]->data);
        ptr[0]=ptr[0]->next;
    }

}