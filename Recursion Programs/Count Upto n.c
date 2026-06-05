//Count 0 -> n Using Recursion
#include<stdio.h>
int count(int n, int i)
{
    if(i==n)
    {
        printf("%d",n);
        return n;
    }
    else
    {
        printf("%d \n",i);
        return count(n,i+1);
    }
}
int main()
{
    int n, i=0;
    printf("Where do you want to count till:");
    scanf("%d",&n);
    count(n,i);
}