//Prints Names in Sequence Vansh -> Ajay -> Aryan
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
    vansh();
    return 0;
}