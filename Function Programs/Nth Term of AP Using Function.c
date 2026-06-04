//Function finds Nth term of AP
#include<stdio.h>
int term( int x, int y, int n)
{
    int d=y-x;
    int an=x+(n-1)*d;
    printf("%dth term of A.P. is: %d", n, an);
    return an;
}
int main()
{
    int n1, n2, n;
    printf("Sum Of AP Calculator /n");
    printf("Enter First Term of AP:");
    scanf("%d", &n1);
    printf("Enter First Term of AP:");
    scanf("%d", &n2);
    printf("Which term do you want to know:");
    scanf("%d", &n);
    int nth=term(n1,n2,n);
    return 0;
}