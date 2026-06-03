//Finds remainder using the % operator
#include<stdio.h>
int main()
{
    int a;
    int b;
    int r;
    printf("enter a number:-");
    scanf("%d",&a);
    printf("enter a smaller number:-");
    scanf("%d",&b);
    a>b;
    r=a%b;
    printf("remainder:-");
    printf("%d",r);
    return 0;
}