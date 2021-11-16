#include<stdio.h>

void main()
{
    int class,sub_fail;

    printf("Enter the grades of student : ");
    scanf("%d", class);

    printf("Enter the number of subject he failed : ");
    scanf("%d", &sub_fail);

    switch(class)
    {
        case 1:
            {
                if (sub_fail<3)
                    printf("He got grace as per subject is : %d", 5*class);
                else
                    printf("He did not get grace ");
            }

        case 2:
            {
                if (sub_fail<2)
                    printf("He got grace as per subject is : %d", 4*class);
                else
                    printf("He did not get grace ");
            }

        case 3:
            {
                if (sub_fail<1)
                    printf("He got grace as per subject is : %d", 5*class);
                else
                    printf("He did not get grace ");
            }



    }

}