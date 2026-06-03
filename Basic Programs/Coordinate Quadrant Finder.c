//Determines Which Quadrant (x,y) Lies in
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X Coordinate:");
    scanf("%d",&x);
    printf("Enter Y Coordinate:");
    scanf("%d",&y);
    if(x>0&&y>0)
    {
        printf("The coordinate point (");
        printf("%d",x);
        printf(",");
        printf("%d",y);
        printf(") lies in the First quadrant.");
    }
    else if(x<0&&y>0)
    {
        printf("The coordinate point (");
        printf("%d",x);
        printf(",");
        printf("%d",y);
        printf(") lies in the Second quadrant.");
    }
    else if(x<0&&y<0)
    {
        printf("The coordinate point (");
        printf("%d",x);
        printf(",");
        printf("%d",y);
        printf(") lies in Third quadrant.");
    }
    else if(x>0&&y<0)
    {
        printf("The coordinate point (");
        printf("%d",x);
        printf(",");
        printf("%d",y);
        printf(") lies in the Fourth quadrant.");
    }
    else if(x==0&&y==0)
    {
        printf("Coordinate (0,0) Lies on Origin");
    }
    return 0;
}