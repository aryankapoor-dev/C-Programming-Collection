//User Defines a Target and the Program Finds two Numbers in the Array That Add up to Make the Target
#include<stdio.h>
int main()
{
    int target, sum=0, arr[7]={1,2,3,4,5,8,10};
    printf("Enter the target:");
    scanf("%d",&target);
    for(int i; i!=7; i++)
    {
        for(int j=0; j!=7; j++)
        {
            sum=arr[i]+arr[j];
            if(sum==target)
            {
                printf("Numbers %d and %d add upto %d",arr[i],arr[j],target);
                return 0;
            }
        }
    }
    printf("No numbers add up to form the target.");
    return 0;
}