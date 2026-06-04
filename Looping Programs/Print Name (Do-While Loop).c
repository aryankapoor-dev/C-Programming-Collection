//Prints "Aryan Kapoor" Using Do-While Loop
#include<stdio.h>
int main()
{
    int i;
    printf("Please enter an input:");
    scanf("%d",&i);
    do
    {
        printf("Aryan Kapoor");
        printf("\n");
        i++;
    }
    while (i<=5);
    return 0;
}