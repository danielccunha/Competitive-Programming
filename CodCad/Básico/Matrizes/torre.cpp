#include <cstdio>
#include <cstring>
#define MAXN 1000

int main()
{
    int N, m[MAXN][MAXN], i, j;
    int l[MAXN], c[MAXN]; // Vetores auxiliares que iram guardar a soma total 
                          // de cada linha e coluna da matriz

    scanf("%d", &N);
    memset(l, 0, N*sizeof(int));
    memset(c, 0, N*sizeof(int));

    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
        {
            scanf("%d", &m[i][j]);
            l[i] += m[i][j];
            c[j] += m[i][j];
        }

    int max = 0, tmp;

    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
        {
            tmp = l[i] + c[j] - (2*m[i][j]);
            if(tmp > max) max = tmp;
        }

    printf("%d\n", max);

    return 0;
}