//Check if The Number is Palindrome
#include<stdio.h>
int main()
{
    int n, count, d, f, e, i, j, sum;
    int b=n;
    printf("Enter a number to check if its palindrome or not:");
    scanf("%d",&n);
    count=0;
    while(b!=0)
    {
        b=b/10;
        count++;
    }
    sum=0;
    int c=n;
    for(i=1; i!=count; i++)
    {
        d=c%10;
        f=count;
        for(j=0; j!=f; j++)
        {
            e=d*10;
            f--;
            sum=sum+e;
        }
        c=c/10;
    }
    if(n==sum)
    {
        printf("%d => %d is a Palindrome Number.", n, sum);
    }
    else
    {
        printf("%d => %d is not a Palindrome Number.", n, sum);
    }
    return 0;
}