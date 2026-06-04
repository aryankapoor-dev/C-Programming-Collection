//Keeps Adding User Input Until a Negative Number is Entered
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("I Will Show Sum Until You Input a Negative Number \n \n");
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+n;
        printf("Sum: %d", sum);
        printf("\nEnter another number:");
        scanf("%d",&n);
    }
    while(n>=0);
    printf("You entered a negative number.");
    printf("\nSum: %d", sum);
    return 0;
}