//Calculates Sum of All Digits of a Number
#include<stdio.h>
int main()
{
    int n, a, sum;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("Sum of digits:");
    printf("%d",sum);
    return 0;
}