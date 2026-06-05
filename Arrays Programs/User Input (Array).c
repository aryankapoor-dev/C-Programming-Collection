//Reads user Input and Fills Array, Later Print Those Values
#include<stdio.h>
int main()
{
    int a[5]={0,1,2,3,4};
    for(int i=0;i<=4;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=4;i++)
    {
        printf("%d \n",a[i]);
    }
}