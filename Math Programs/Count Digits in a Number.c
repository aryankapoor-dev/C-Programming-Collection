//Counts Number of Digits in a Number
#include<stdio.h>
int main()
{
    int  n;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("No. of digits:");
    printf("%d",count);
    return 0;
}