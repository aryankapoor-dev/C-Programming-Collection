//Prints a Hourglass Pattern Between Stars
#include<stdio.h>
int main()
{
    int r, a, b, c;
    printf("Enter the number of rows you want to print the pattern in:");
    scanf("%d",&r);
    b=0;
    while(r!=0)
    {
        a=r;
        while(a!=0)
        {
            printf("*");
            a--;
        }
        c=b*2;
        while(c!=0)
        {
            printf(" ");
            c--;
        }
        b++;
        a=r;
        while(a!=0)
        {
            printf("*");
            a--;
        }
        printf("\n");
        r--;
    }
    return 0;
}