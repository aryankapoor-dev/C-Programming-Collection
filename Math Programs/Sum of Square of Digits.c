//Square Each Digit of a Number and Calculate it's Sum
#include<stdio.h>
int main()
{
    int n, a, b, sum=0;
    printf("CALCULATE SUM OF SQUARES OF DIGITS OF A NUMBER");
    printf("\nEnter a number:");
    scanf("%d",&n);
    do
    {
        a=n%10;
        b=a*a;
        sum=sum+b;
        n=n/10;
    }
    while(n>=1);
    printf("Sum of squares of digits: %d", sum);
    return 0;
}