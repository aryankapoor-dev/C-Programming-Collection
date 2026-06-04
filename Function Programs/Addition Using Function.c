//Prints Sum of 2 Numbers Using Function
#include<stdio.h>
int add(int a, int b)
{
    int c=a+b;
    printf("Sum: %d",c);
}
int main()
{
    int a, b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    int sum=add(a,b);
    return 0;
}