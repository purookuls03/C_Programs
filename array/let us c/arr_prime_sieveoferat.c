#include<stdio.h>

void main()
{
    int num[100];
    int i;

    for(i=1;i<=100;i++)
    {
        num[i]=i;
        scanf("%d\n", num[i]);

        if(i%2==0)
        {
            if(i%3==0)
            {
                if(i%4==0)
                {
                    if(i%4==0)
                    {
                        printf("%d\n", num[i]);
                    }
                }
            }
        }
    }

   
}