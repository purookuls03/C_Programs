#include<stdio.h>
int remov(int a[],int n,int p)
{
    
    
    for (int i = p; i < n; i++)
    {
        a[i] = a[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }
 return 0;   
}
int main()
{
    int n,a[100],p;
    printf("enter the size")
    scanf("%d",&n);
    printf("enter the array\n")
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position: ");
    scanf("%d",&p);
    remov(a,n,p);
    
    return 0;
}