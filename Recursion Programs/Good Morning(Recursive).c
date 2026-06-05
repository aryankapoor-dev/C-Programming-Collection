//Print "GM" Recursively
#include<stdio.h>
int GM(int n)
{
    printf("Good Morning");
    printf("\n");
    if(n==1)
    {
        return 0;
    }
    else
    {
        return GM(n-1);
    }
    n--;
}
int main()
{
    int n;
    printf("How many times to print 'Good Morning':");
    scanf("%d",&n);
    GM(n);
    return 0;
}