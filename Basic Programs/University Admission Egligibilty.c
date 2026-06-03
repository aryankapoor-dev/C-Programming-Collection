//Checks Marks Threshold For Admission
#include<stdio.h>
int main()
{
    int math,phy,chem,total;
    printf("Please enter your mathematics marks:");
    scanf("%d",&math);
    printf("Please enter your physics marks:");
    scanf("%d",&phy);
    printf("Please enter your chemistry marks:");
    scanf("%d",&chem);
    total=math+chem+phy;
    if(math>=65&&phy>=55&&chem>=50)
    {
        if(total>=190||math+phy>=140)
        {
            printf("The Candidate is Eligible for Admission.");
        }
        else
        {
            printf("The Candidate is Not Eligible for Admission.");
        }
    }
    else
    {
        printf("The Candidate is Not Eligible for Admission.");
    }
    return 0;
}