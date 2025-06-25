/*program to check if charecter is vowel or not using else if ladder*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charecter\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("it is a vowel charecter");
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("it is a vowel charecter");
    }
    else
    {
        printf("it is not a vowel charecter");
    }
    return 0;
