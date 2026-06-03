//Nested Condition for Divisibility Rules
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number divisible by 3 or 5 but not 15:");
    scanf("%d",&x);
    if(x%3==0||x%5==0)
    {
        if(x%15!=0)
        printf("It is divisible by 3 or 5 but not divisible by 15.");
        else
        {
            printf("It is divisible by 15.");
        }
    }
    else
    {
        printf("number does not satisfy the condition.");
    }
    return 0;
}