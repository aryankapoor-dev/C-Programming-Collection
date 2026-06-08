//Shows value at Index and Address Using Pointer
#include<stdio.h>
int main()
{
    int a[5]={0,1,5,7,10};
    int p=*a;
    printf("%d \n",a[2]);
    printf("%p",&p);
}