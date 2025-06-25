/*program to find the fibonacci series*/
#include <stdio.h>

int main() 
{
    int n = 6; 
    int fib0 = 0, fib1 = 1, fib2, i;

    printf("Fibonacci Series of %d elements:\n", n);
    
    for(i = 0; i < n; i++) 
    {
        printf("%d ", fib0);
        fib2 = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib2;
    }

    return 0;
}