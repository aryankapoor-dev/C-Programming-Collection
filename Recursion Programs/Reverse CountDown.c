//Print from n -> 0 Using Recursion
#include<stdio.h>
int reversecount(int n)
{
    printf("%d",n);
    printf("\n");
    if(n==0)
    {
        return 0;
    }
    else
    {
        return reversecount(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a number to count backwards from:");
    scanf("%d",&n);
    int last=reversecount(n);
    return 0;
}