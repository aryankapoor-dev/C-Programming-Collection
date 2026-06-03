//Checks Divisibility By 4
#include<stdio.h>
int main()
{
    int x;
    printf("Enter an Year to Find Out if it is a Leap Year:");
    scanf("%d",&x);
    if(x%4==0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}