#include <stdio.h>

int main(void) {
	int num,ind=0,eng=0;
	scanf("%d",&num);
	int a[5];
    while(num--)
    {
        for(int i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0;j<5;j++)
        {
            
            if(a[j]==1)
                ind++;
            else if(a[j]==2)
                eng++;
        }    
        if(ind>eng)
            printf("India\n");
        else if(eng>ind) 
            printf("England\n");
        else
            printf("Draw");
    }
    return 0;
}