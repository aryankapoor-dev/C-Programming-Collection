//Basic Salary + HRA + Other Allowances
#include<stdio.h>
int main()
{
    int bs;
    int hra;
    int oa;
    float GS;
    printf("Please Enter Basic Yearly Salary:");
    scanf("%d",&bs);
    printf("Please Enter HRA:");
    scanf("%d",&hra);
    printf("Please Ener Other allowances:");
    scanf("%d",&oa);
    GS=bs+hra+oa;
    printf("Gross Salary:");
    printf("%f",GS);
    return 0;
}