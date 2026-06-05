//One Array, Nested Loop, Returns on First Duplication Found
#include<stdio.h>
int main()
{
    int n, m, a, b;
    printf("How many spaces do you need:");
    scanf("%d",&n);
    m=n+1;
    int arr[m];
    for(int i=0; i!=m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i!=m;i++)
    {
        for(int j=i+1;j!=m;j++)
        {
            a=arr[i], b=arr[j];
            if(a==b)
            {
                printf("%d is a duplicate number.",b);
                return 0;
            }
        }
    }
}