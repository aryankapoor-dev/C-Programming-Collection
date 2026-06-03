//Calculates Volume of a Sphere = (4/3)πr³
#include<stdio.h>
int main()
{
    int r;
    printf("Enter the radius of your sphere:");
    scanf ("%d",&r);
    printf("Volume of your sphere:");
    printf("%f",(4*3.14*r*r*r)/3);
    return 0;
}