//User Decides Array Size, Fills and Prints it
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("How much memory spaces to allocate:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i!=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i!=n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}