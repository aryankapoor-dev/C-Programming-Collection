//Prints a (+) Pattern
#include<stdio.h>
int main()
{
    int n, r, c, a;
    printf("Enter the number of lines to print pattern in:");
    scanf("%d",&n);
    a=n/2;
    r=1;
    while(r<=a)
    {
        c=1;
        while(c<=a)
        {
            printf(" ");
            c++;
        }
        printf("*");
        c=1;
        while(c<=a)
        {
            printf(" ");
            c++;
        }
        printf("\n");
        r++;
    }
    while(n>=1)
    {
        printf("*");
        n--;
    }
    printf("\n");
    r=1;
    while(r<=a)
    {
        c=1;
        while(c<=a)
        {
            printf(" ");
            c++;
        }
        printf("*");
        c=1;
        while(c<=a)
        {
            printf(" ");
            c++;
        }
        printf("\n");
        r++;
    }
    return 0;
}