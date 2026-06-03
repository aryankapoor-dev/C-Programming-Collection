//Prints First n Odd Numbers Using For Loop
#include<stdio.h>
int main()
{
    int n, i;
    printf("Please enter n:");
    scanf("%d", &n);
    for(i=1; i<=2*n-1; i+=2)
    {
        printf("%d",i);
        printf("\n");
    }
    return 0;
}