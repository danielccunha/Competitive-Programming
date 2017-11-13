#include <cstdio>
#define MAXN 100

int main()
{
    int m[MAXN][MAXN], tmp, N, i, j;

    scanf("%d", &N);
    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
            scanf("%d", &m[i][j]);

    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
        {
            scanf("%d", &tmp);
            m[i][j] += tmp;
        }

    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
            (j != N-1) ? printf("%d ", m[i][j]) : printf("%d\n", m[i][j]);

    return 0;
}