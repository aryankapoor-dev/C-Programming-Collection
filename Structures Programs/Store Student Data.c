//Store Student Data in Structure and Display it
#include<stdio.h>
struct student
{
    int age;
    char name[6];
    float percentage;
};
int main()
{
    struct student st1, st2;
    printf("Enter age, name percent");
    scanf("%d %s %f", &st1.age, &st1.name, &st1.percentage);    
    printf("name: %s \n", st1.name);
    printf("age: %d \n", st1.age);
    printf("percentage: %f \n",st1.percentage);
}