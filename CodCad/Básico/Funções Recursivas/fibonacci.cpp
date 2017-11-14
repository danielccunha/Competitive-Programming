#include <cstdio>

int fib(int N)
{
    if(N <= 1)
        return 1;
    else
        return fib(N-1) + fib(N-2);
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", fib(N));
    return 0;
}