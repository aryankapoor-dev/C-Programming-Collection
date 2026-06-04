//Prints Same chain Called Forever in a While Loop
#include<stdio.h>
void aryan()
{
    printf("Aryan Kapoor\n");
    return ;
}
void ajay()
{
    printf("Ajay Kumar\n");
    aryan();
    return ;
}
void vansh()
{
    printf("Vansh Bhatnagar\n");
    ajay();
    return ;
}
int main()
{
    int i=1;
    while(i>0)
    {
    vansh();
    }
    return 0;
}