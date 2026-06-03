//Prints 3, 12, 48, ... upto n terms
#include<stdio.h>
int main()
{
    int x, n, i;
    x=3;
    printf("Enter N:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d",x);
        printf("\n");
        x=x*4;
    }
    return 0;
}