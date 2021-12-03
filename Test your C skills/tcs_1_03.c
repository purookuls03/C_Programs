#include<stdio.h>
void main()
{
    int i;
  int res= scanf("%d",&i);

  printf("scanf=%d\n", res);

  int res1=printf("123456789\n");
  printf("printf=%d\n", res1);

    for(;scanf("%d",&i);printf("%d",i));
printf("Exit");
    // return 0;

}