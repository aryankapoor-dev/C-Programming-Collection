//Multiply Elements of Array
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5}, product=1;
    for(int i=0;i<=4;i++)
    {
        product=product*a[i];
    }
    printf("%d",product);
}