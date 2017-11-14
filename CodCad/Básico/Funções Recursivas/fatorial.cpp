#include <cstdio>

int f(int N)
{
    if(N <= 1)
        return 1;
    else
        return N * f(N-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", f(N));

    return 0;
}