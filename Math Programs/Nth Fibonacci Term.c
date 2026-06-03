//Finds Nth Term of Fibonacci
#include<stdio.h>
int main()
{
    int n,i,c;
    int a=0;
    int b=1;
    printf("Enter the number of term you want to know:");
    scanf("%d",&n);
    for (i=1; i!=n; i++)
    {
        c=b;
        b=a+b;
        a=c;
    }
    printf("The %d th term of fibonacci is %d", n, b);
    return 0;
}