#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10]="bamboo";
    char str2[10]="chap";
    char str3[20];
    int l,k;
    printf("\nlength of string str1 : %d", strlen(str1));
    printf("\nlength of string str2 : %d", strlen(str2));
    strcpy(str3,str1);
    printf("\nstring str3 : %s", str3);
    printf("\nstring str1 : %s", str1);
    strcpy(str3,str2);
    printf("\nstring str3 : %s", str3);
    printf("\nstring str2 : %s", str2);
    l=strcmp(str1,str2);
    printf("\non comparing the str1 and str2 (l) : %d", l);
    k=strcmp(str2,str3);
    printf("\non comparing the str2 and str3(k) : %d", k);
    printf("\non concentration str1 : %s", strcat(str1,str2));

}