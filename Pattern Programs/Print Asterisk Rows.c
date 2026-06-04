//Prints n rows of "*****" using While
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of times you want to print:");
    scanf("%d",&n);
    while(n>0)
    {
        printf("*****");
        printf("\n");
        n--;
    }
    return 0;
}