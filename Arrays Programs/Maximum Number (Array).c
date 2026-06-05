//Reads 7 Numbers, Finds Largest
#include<stdio.h>
int main()
{
    int a[7], max;
    printf("Enter the Numbers of array to find largest out of them:");
    for(int i=0; i!=7; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int j=0; j!=7; j++)
    {
        if(a[j]>=max)
        {
            max=a[j];
        }
    }
    printf("Max value of array: %d",max);
}