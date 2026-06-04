//Enter a,b The Program calculattes a^b by Repeated Multiplication
#include<stdio.h>
int multiplied( int a, int b)
{
    int c=1;
    while(b!=0)
    {
        c=c*a;
        b--;
    }
    return c;
}
int main()
{
    int a, b;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a power:");
    scanf("%d",&b);
    int power=multiplied(a,b);
    printf("%d to the power of %d is: %d", a, b, power);
}