//Nested Loop: Prints 4 Starts Per Row or n Number of Rows
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of times you want to print:");
    scanf("%d",&n);
    while(n>0)
    {
        for(i=0; i<4; i++)
        {
            printf("*");
        }
        printf("\n");
        n--;
    }
    return 0;
}