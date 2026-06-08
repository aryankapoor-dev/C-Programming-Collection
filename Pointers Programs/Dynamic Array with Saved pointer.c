//Saves Original ptr in p Before Transversal
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("How much memory spaces to allocate:");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    int *p=ptr;
    for(int i=0; i!=n;i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }
    int *t=p; //To save first address for future
    for(int i=0; i!=n;i++)
    {
        printf("%d",(*p));
        p++;
    }
}