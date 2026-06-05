//Count Climbing Paths For n Stairs
#include<stdio.h>
int totalways(int n, int i)
{
    if(n==1)
    {
        return i*2;
    }
    else
    {
        i=totalways(n-1,i);
        i=i*2;
        return i;
    }
}
int main()
{
    int n, i=1;
    printf("|CALCULATE NUMBER OF WAYS TO CLIMB STAIRS| \n");
    printf("Number of stairs:");
    scanf("%d",&n);
    i=totalways(n, i);
    printf("No. Of Ways To Climb %d Stairs: %d \n", n, i);
    printf("If someone can only climb a maximum of four stairs, \nthe total number of ways to climb a longer staircase is irrelevant to them");
}