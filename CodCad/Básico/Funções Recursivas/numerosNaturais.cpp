#include <cstdio>

int somaNaturais(int N)
{
    if(N <= 1)
        return 1;
    else
        return N + somaNaturais(N-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", somaNaturais(N));

    return 0;
}