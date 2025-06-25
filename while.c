/*program to add 1234 using while loop*/
#include<stdio.h>
int main()
{
    int n=123456;
    int sum=0;
    while(n!=0)
    {
        int rem=n%10;
        sum=sum+=rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
