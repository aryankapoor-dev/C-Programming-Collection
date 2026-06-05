//Linear Searching of and element in an Array
#include<stdio.h>
int main()
{
    int arr[10]={5,6,7,4,1,3,10,15,94,100};
    int a;
    printf("Which number to find:");
    scanf("%d",&a);
    for(int i=0; i!=10; i++)
    {
        if(a==arr[i])
        {
            printf("%d is at %d position of my array.",a,i);
            return 0;
        }
    }
    printf("%d is not in my array.",a);
    return 0;
}