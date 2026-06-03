//Bill Ammount Decides Different % of Discount
#include<stdio.h>
int main()
{
    int a, b;
    printf("DISCOUNT CALCULATOR\n");
    printf("Enter the ammount of your bill:");
    scanf("%d",&a);
    if(a<=100)
    {
        printf("You got no discount:\n");
        printf("You will pay: %d", a);
    }
    else if(a>100 && a<=200)
    {
        printf("You got 5 percent discount:\n");
        b=a/20;
        a=a-b;
        printf("You will pay: %d", a);
    }
    else if(a>200 && a<=300)
    {
        printf("You got 6 percent discount:\n");
        b=(a*3)/50;
        a=a-b;
        printf("You will pay: %d", a);
    }
    else if(a>300 && a<=400)
    {
        printf("You got 7 percent discount:\n");
        b=(a*7)/100;
        a=a-b;
        printf("You will pay: %d", a);
    }
    else if(a>400 && a<=500)
    {
        printf("You got 10 percent discount.\n");
        b=a/10;
        a=a-b;
        printf("You will pay: %d", a);
    }
    else if(a>500 && a<=1000)
    {
        printf("You got 15 percent discount:\n");
        b=(a*3)/20;
        a=a-b;
        printf("You will pay: %d", a);
    }
    else if(a>1000)
    {
        printf("You got 20 percent discount:\n");
        b=a/50;
        a=a-b;
        printf("You will pay: %d", a);
    }
    else
    {
        printf("Error");
    }
    return 0;
}