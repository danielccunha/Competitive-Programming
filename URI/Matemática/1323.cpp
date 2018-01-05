#include <cstdio>

int main()
{
    int N;
    while(scanf("%d", &N) && N != 0)
    {
        N = ((N*(N+1)) * (2*N + 1))/6;
        printf("%d\n", N);
    }

    return 0;
}