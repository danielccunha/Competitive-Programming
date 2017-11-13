#include <cstdio>
#include <algorithm>
#define MAXN 100

using std::pair;
using std::sort;

int main()
{
    // Corredores, Voltas
    int N, M, i, j, tmp;
    pair<int, int> t[MAXN];

    scanf("%d %d", &N, &M);
    
    for(i = 0; i < N; ++i)
    {
        t[i].first  = 0;
        t[i].second = i + 1;
    }

    for(i = 0; i < N; ++i)
        for(j = 0; j < M; ++j)
        {
            scanf("%d", &tmp);
            t[i].first += tmp;
        }

    sort(t, t+N);

    printf("%d\n%d\n%d\n", t[0].second, t[1].second, t[2].second);

    return 0;
}