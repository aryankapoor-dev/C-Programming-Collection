//Prints a Hollow Rectangle
#include<stdio.h>
int main()
{
    int r, c, d;
    printf("Enter the length of box you want to print:");
    scanf("%d",&r);
    printf("Enter the height of box you want to print:");
    scanf("%d",&c);
    int a=r, b=c-2;
    while(a!=0)
    {
        printf("*");
        a--;
    }
    printf("\n");
    a=b;
    d=r;
    while(a!=0)
    {
        b=d-2;
        printf("*");
        while(b!=0)
        {
            printf(" ");
            b--;
        }
        printf("*");
        printf("\n");
        a--;
    }
    while(r!=0)
    {
        printf("*");
        r--;
    }
    printf("\n");
    return 0;
}