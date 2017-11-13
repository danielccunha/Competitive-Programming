#include <cstdio>
#include <algorithm>

#define MAXN 112345

// Número de ofertas, número de deputados
int N, M, i;
int v[MAXN]; // ofertas

bool cmp(int A, int B)
{
    return A%M > B%M || (A%M == B%M && A > B);
}

int main()
{
    scanf("%d %d", &N, &M);
    for(i = 0; i < N; ++i)
        scanf("%d", &v[i]);

    std::sort(v, v+N, cmp);

    for(i = 0; i < N; ++i)
        (i != N-1) ? printf("%d ", v[i]) : printf("%d\n", v[i]);

    return 0;
}