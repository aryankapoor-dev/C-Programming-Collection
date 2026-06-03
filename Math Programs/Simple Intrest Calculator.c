//Computes SI from Principle Ammount, Rate of Intrest and Time
#include<stdio.h>
int main()
{
    int p,r,t;
    int x;
    int SI;
    printf("Enter Principal Ammount:-");
    scanf("%d",&p);
    printf("Enter Yearly Rate of Interest (In Integer):-");
    scanf("%d",&x);
    printf("Number of Years Borrowed:-");
    scanf("%d",&t);
    r=(100*x)/p;
    SI=(p*r*t)/100;
    printf("Simple Intrest Each Year:-");
    printf("%d",SI);
    return 0;
}