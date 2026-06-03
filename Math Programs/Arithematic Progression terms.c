//Print N Terms of AP (a=1, d=2)
#include<stdio.h>
int main()
{
    int a, d, x, n, i;
    printf("Please enter n:");
    scanf("%d", &n);
    a=1;
    d=2;
    i=1;
    do
    {
        x=a+(i-1)*d;
        printf("%d",x);
        printf("\n");
        i++;
    }
    while(i!=n+1);
    return 0;
}