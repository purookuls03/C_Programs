#include<stdio.h>
void main()
{
    struct account
        {
            int acc_no;
            float bal;
        };
        struct account a[10];
        int i,acc;
        float balance;

        for(i=0;i<10;i++)
        {
            printf("Enter account number and balance : ");
            scanf("%d %f", &acc, &balance);
            a[i].acc_no=acc;
            a[i].bal=balance;
        }

        for(i=0;i<10;i++)
        {
            printf("\n %d   %f ", a[i].acc_no, a[i].bal);
        }
}