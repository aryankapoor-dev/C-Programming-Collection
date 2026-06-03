//Five Subjects Grade Given, Calculate % and output A-F Grade
#include<stdio.h>
int main()
{
    int phy;
    int chem;
    int bio;
    int math;
    int comp;
    int tmarks;
    int percentage;
    printf("Please enter physics marks of student:");
    scanf("%d",&phy);
    printf("Please enter Chemistry marks of student:");
    scanf("%d",&chem);
    printf("Please enter biology marks of student:");
    scanf("%d",&bio);
    printf("Please enter mathematics marks of student:");
    scanf("%d",&math);
    printf("Please enter Computer marks of student:");
    scanf("%d",&comp);
    tmarks=phy+chem+bio+math+comp;
    percentage=tmarks/5;
    printf("Percentage of student:");
    printf("%d",percentage);
    printf("\n");
    if(percentage>=90)
    {
        printf("Grade:A");
    }
    else if(percentage>=80)
    {
        printf("Grade:B");
    }
    else if(percentage>=70)
    {
        printf("Grade:C");
    }
    else if(percentage>=60)
    {
        printf("Grade:D");
    }
    else if(percentage>=40)
    {
        printf("Grade:E");
    }
    else if(percentage<40)
    {
        printf("Grade:F");
    }
    return 0;
}