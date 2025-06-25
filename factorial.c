/*program to print factorial of 5 using */
#include<stdio.h>
int factorial(int n)
{
    int f=0;
    if(n<=1)
    {
         return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int num;
    printf("enter the number to find the factorial\n");
    scanf("%d",&num);
    printf("Factorial of a given number is %d\n",factorial(num));

return 0;
}

    