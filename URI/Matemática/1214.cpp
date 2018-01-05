#include <cstdio>
#define MAXN 1000

int main()
{
    int C, N, i, a;
    int g[MAXN];
    float m, t;

    scanf("%d", &C);
    while(C--)
    {
        t = a = 0;
        scanf("%d", &N);
        for(i = 0; i < N; ++i)
        {
            scanf("%d", &g[i]);
            t += g[i];
        }

        m = t/N;

        for(i = 0; i < N; ++i)
            if(g[i] > m)
                ++a;

        m = (a/(float)N) * 100;
        printf("%.3f%%\n", m);
    }

    return 0;
}