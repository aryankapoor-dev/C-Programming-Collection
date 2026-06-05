//Copies Array: Nested Loop Finds Duplicates
#include<stdio.h>
int main()
{
    int n, m;
    printf("How many spaces do you need:");
    scanf("%d",&n);
    m=n+1;
    int arr[m],arr2[m];
    for(int i=0; i!=m;i++)
    {
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
    }
    for(int i=0;i!=m;i++)
    {
        for(int j=i+1;j!=m;j++)
        {
            if(arr[i]==arr2[j])
            {
                printf("%d is a duplicate number.",arr2[j]);
            }
        }
    }
}