//Prints Day of Week From Number(Assume Week Starts At Monday)
#include<stdio.h>
int main()
{
    int day;
    printf("Pleas enter an input:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
    }
    return 0;
}