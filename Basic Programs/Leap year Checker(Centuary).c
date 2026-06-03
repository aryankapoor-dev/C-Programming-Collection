//Handles Centuary Years with %100 and %400
#include<stdio.h>
int main()
{
    int x;
    printf("Enter an year in centuary form:");
    scanf("%d",&x);
    if (x%100==0&&x%400==0)
    {
        printf("It is a leap year.");
    }
    else
    {
        printf("It is not a leap year.");
    }
    return 0;
}