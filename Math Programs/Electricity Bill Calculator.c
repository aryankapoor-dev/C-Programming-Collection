//Billing Across 50/150/250 Unit Slabs
#include<stdio.h>
int main()
{
    int x;
    int bo;
    int bt;
    int bth;
    int bf;
    int fifty;
    int h;
    int hh;
    int hhh;
    printf("Please Enter The Number of Units Consumed:");
    scanf("%d",&x);
    bo=0.5*x;
    fifty=bo+(bo/5);
    bt=(0.75*(x-50))+bo;
    h=bt+(bt/5);
    bth=(1.2*(x-150))+bt;
    hh=bth+(bth/5);
    bf=(1.5*(x-250))+bth;
    hhh=bf+(bf/5);
    printf("Total Electricity Bill:");
    if(x<=50)
    {
        printf("%d",fifty);
    }
    else if(x>50&&x<=150)
    {
        printf("%d",h);
    }
    else if(x>150&&x<=250)
    {
        printf("%d",hh);
    }
    else if(x>250)
    {
        printf("%d",hhh);
    }
    return 0;
}