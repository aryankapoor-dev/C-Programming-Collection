//Prints 1, 2, 4, 8, ... up to n terms
#include<stdio.h>
int main()
{
    int x, n, i;
    x=1;
    printf("Enter N:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d",x);
        printf("\n");
        x=x*2;
    }
    return 0;
}