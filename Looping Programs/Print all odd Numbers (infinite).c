//Prints odd Numbers Forever Using Do-While Loop
#include<stdio.h>
int main()
{
    int a;
    a=1;
    do
    {
        printf("%d",a);
        printf("\n");
        a= a+2;
    }
    while(a>0);
    return 0;
}