//Compares CP and SP to Decide Profit or Loss
#include<stdio.h>
int main()
{
    int SP;
    int CP;
    printf("Enter Cost Price:");
    scanf("%d",&CP);
    printf("Enter Selling Price:");
    scanf("%d",&SP);
    if(SP<CP)
    {
        printf("You're in Loss.");
    }
    else{
        printf("You're in profit.");
    }
}