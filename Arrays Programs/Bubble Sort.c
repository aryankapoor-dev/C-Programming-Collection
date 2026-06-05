//Sorts n User inputs in Ascending Order
#include<stdio.h>
int main()
{
    int n, p;
    printf("ASCENDING OREDER \n");
    printf("How many numbers do you have:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i!=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i!=n; i++)
    {
        for(int j=0; j!=n; j++)
        {
            if(a[i]<a[j])
            {
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    for(int i=0; i!=n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}