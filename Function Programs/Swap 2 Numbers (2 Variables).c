//Swap two Numbers Without the Temp Variable
#include<stdio.h>
int swap(int x, int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("First number: %d, Second number: %d",x, y);
    return x,y;
}
int main()
{
    int a, b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}