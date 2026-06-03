//Checks if Three Sides Form a Valid Triangle
#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("Enter Length (without units) of the first side of the triangle.");
    scanf("%d",&x);
    printf("Enter Length (without units) of the second side of the triangle.");
    scanf("%d",&y);
    printf("Enter Length (without units) of the third side of the triangle.");
    scanf("%d",&z);
    if((x+y)>z&&(y+z)>x&&(z+x)>y)
    {
        printf("The three lengths are sides of a triangle.");
    }
    else
    {
        printf("The three lengths are not sides of triangle.");
    }
    return 0;
}