//Swap two numbers Using Temp Variable
#include<stdio.h>
int swap(int x, int y)
{
    y=x+y;
    x=y-x;
    y=y-x;
    printf("First Number: %d \nSecond Number: %d", x, y);
}
int main()
{
    int a, b;
    printf("SWAPPER \n");
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    swap(a,b);
}