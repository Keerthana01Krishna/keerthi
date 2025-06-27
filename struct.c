#include<stdio.h>
struct student
{
    char name[50];
    char USN[15];
    int age;
};
int main()
{
    struct student s1;
    printf("enter the name of the student\n");
    scanf("%s",&s1.name);
    printf("enter the USN of the student\n");
    scanf("%c",&s1.USN);
    printf("enter the age of the student\n");
    scanf("%d",&s1.age);
    printf("The name of the student is %s\n");
    printf("The USN of the student is %c\n");
    printf("The age of the student is %d\n");

    return 0;
}