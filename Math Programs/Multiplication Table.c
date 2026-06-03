//Prints the Table of a Number Till 'b'
#include<stdio.h>
int main()
{
    int n,a,b,m;
    a=1;
    printf("Enter the number to see it's table:");
    scanf("%d",&n);
    printf("Enter the number you want to see the table till:");
    scanf("%d",&b);
    while (a<=b)
    {
        m=n*a;
        printf("%d x %d = %d", n, a, m);
        printf("\n");
        a++;
    }
    return 0;
}