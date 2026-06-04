//Prints Letter A
#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, x;
    printf("Enter the number of lines to print A in:");
    scanf("%d",&a);
    b=a/2;
    c=b+1;
    d=b-1;
    e=d;
    for(int i=0; i!=b; i++)
    {
        for(int j=0; j!=c; j++)
        {
            printf(" ");
        }
        for(int k=0; k!=d; k++)
        {
            printf(" ");
        }
        d--;
        printf("*");
        if(i=0)
        {
            printf("\n");
        }
        else
        {
            int l=1;
            f=l;
            for(int m=0; m!=e; m++)
            {
                int y=f;
                while(y!=0)
                {
                    printf(" ");
                    y--;
                }
                f=f+2;
                printf("*");
                printf("\n");
            }
        }
    }
    b=a;
    while(b!=0)
    {
        printf("*");
    }
    printf("\n");
    b=a/2;
    c=b-1;
    c=d;
    e=b;
    for(int i=0; i!=b; i++)
    {
        for(int j=0; j!=d; j++)
        {
            printf(" ");
        }
        d--;
        printf("*");
        int l=7;
        f=l;
        for( int m=0; m!=e; m++)
        {
            x=f;
            while(x!=0)
            {
                printf(" ");
                x--;
            }
            f=f+2;
            printf("*");
            printf("\n");
        }
    }
    return 0;
}