//Prints Expanding Then Contracting rows of Stars
#include<stdio.h>
int main()
{
    int p, r, s, a, b, c, d, e;
    printf("Enter the number of rows you want to print the pattern in:");
    scanf("%d",&p);
    r=(p+1)/2;
    s=r;
    r=r-1;
    b=0;
    d=1;
    e=1;
    while(r!=0)
    {
        a=d;
        while(a!=0)
        {
            printf("*");
            a--;
        }
        d++;
        c=r*2;
        while(c!=0)
        {
            printf(" ");
            c--;
        }
        b++;
        a=e;
        while(a!=0)
        {
            printf("*");
            a--;
        }
        e++;
        printf("\n");
        r--;
    }
    r=s;
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