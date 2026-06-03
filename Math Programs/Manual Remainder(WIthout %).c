//Finds Remainder Using Division Formula
#include<stdio.h>
int main()
{
    int a;
    int b;
    int r;
    int q;
    printf("enter a number:-");
    scanf("%d",&a);
    printf("enter a smaller number:-");
    scanf("%d",&b);
    a>b;
    q=a/b;
    r=a-(b*q);
    printf("remainder:-");
    printf("%d",r);
    return 0;
}