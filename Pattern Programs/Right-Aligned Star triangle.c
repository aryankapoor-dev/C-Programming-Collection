//Prints a Right aligned Growing Triangle
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter the number of rows you want the pattern in:");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}