//Finds Largest Among Three Numbers
#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter another number:");
    scanf("%d",&y);
    printf("Enter the last number:");
    scanf("%d",&z);
    if(x>y&&x>z)
    {
        printf("Greatest number:");
        printf("%d",x);
    }
    if(y>x&&y>z)
    {
        printf("Greatest number:");
        printf("%d",y);
    }
    if(z>x&&z>y)
    {
        printf("Greatest number:");
        printf("%d",z);
    }
    return 0;
}