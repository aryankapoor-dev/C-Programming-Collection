//Input Elements by user, All the Elements at Even Indices get Doubled, All the Elements at odd Indices Incremented by 10
#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter values of array:");
    for(int i=0; i!=10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i!=10; i+=2)
    {
        a[i]=a[i]*2;
    }
    for(int i=1; i!=11; i+=2)
    {
        a[i]=a[i]+10;
    }
    for(int i=0; i!=10; i++)
    {
        printf("%d ",a[i]);
    }
}