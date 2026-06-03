// Returns Absolute Modulus of a Number
#include<stdio.h>
int main()
{
    int x;
    int y;
    printf("Enter a number:");
    scanf("%d",&x);
    if (x<0)
    {
        y=-x;
        printf("modulus:");
        printf("%d",y);
    }
    else{
        printf("modulus:");
        printf("%d",x);
    }
    return 0;
}