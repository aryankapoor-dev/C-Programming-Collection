//Sum of Array with For Loop
#include<stdio.h>
int main()
{
    int a[5]={0,1,2,3,4}, sum=0;
    for(int i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}