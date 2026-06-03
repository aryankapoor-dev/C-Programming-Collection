//Pascal Triangle Building
#include<stdio.h>
int lineprint(int a, int j)
{
    int sum=0;
    int b=a*10;
    int c,d,e,f;
    while(b>=1)
    {
        d=b%10;
        b=b/10;
        for(int i=0; a>=1; i++)
        {
            if(i==0)
            {
                break;
            }
            else
            {
                c=a%10;
                a=a/10;
                e=c+d;
                printf("%d ",e);
                while(e>=1)
                {
                    f=e%10;
                    e=e/10;
                    sum=sum*10;
                    sum=sum+f;
                }
                break;
            }
        }
    }
    return sum;
}
int main()
{
    int n, x, b;
    printf("Pascal Triangle\n");
    printf("Enter number of rows you want to print in:");
    scanf("%d",&n);
    x=n;
    int a=1;
    while(x!=0)
    {
        a=lineprint(a,0);
        x--;
    }
}