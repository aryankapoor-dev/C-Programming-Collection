//Prints a Right-Aligned Triangle, Rows Shrink
#include<stdio.h>
int main()
{
    int r, a, b;
    printf("Enter the number of row you want to print:");
    scanf("%d",&r);
    while(r!=0)
    {
        a=r-1;
        b=r;
        while(a!=0)
        {
            printf(" ");
            a--;
        }
        while(b!=0)
        {
            printf("*");
            b--;
        }
        printf("\n");
        r--;
    }
    return 0;
}