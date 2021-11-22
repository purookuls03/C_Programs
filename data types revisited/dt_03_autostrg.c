/*
   Auto matic storage class :
    storage :- Memory
    Deafult initial value :- Garbage value
    Scope :- locally defined to the block
    life :- untill the that local block ends
*/

#include<stdio.h>
void main()
{

    auto int i=1;
    {
        {
            auto int i=2;
            {
                auto int i=2;
                printf("%d\n", i);
            }
            printf("%d\n", i);
        }
        printf("%d\n", i);

    }
    printf("%d\n", i);
}
