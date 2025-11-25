#include <stdio.h>
int fib(int n)
{
    if(n<=2)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int result = fib(n);
    printf("%d", result);
    return 0;
}
