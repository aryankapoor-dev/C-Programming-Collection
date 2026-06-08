//Print Address of each element in 5 Element Array
#include<stdio.h>
int main()
{
    int a[5]={0,1,5,7,10},p;
    printf("%d \n",a[2]);
    printf("%p \n",&a[0]);
    printf("%p \n",&a[1]);
    printf("%p \n",&a[2]);
    printf("%p \n",&a[3]);
    printf("%p \n",&a[4]);
}