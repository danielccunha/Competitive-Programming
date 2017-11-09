#include <cstdio>

int PD[40], calls[40];

int fib(int x)
{
    if(PD[x] == -1)
        PD[x] = fib(x-1) + fib(x-2);

    return PD[x];
}

int fibCalls(int x)
{
    if(calls[x] == -1)
        calls[x] = 2 + fibCalls(x-1) + fibCalls(x-2);
    
    return calls[x];
}

int main()
{
    int N, X, r, c;

    for(int i=2; i < 49; ++i)
        PD[i] = calls[i] = -1;    
 
    PD[0] = calls[0] = calls[1] = 0;
    PD[1] = 1;

    scanf("%d", &N);
    while(N--)
    {
        scanf("%d", &X);
        c = fibCalls(X);
        r = fib(X);

        printf("fib(%d) = %d calls = %d\n", X, c, r);
    }
}