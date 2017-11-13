#include <cstdio>
#include <algorithm>
#define MAXN 112345

using std::sort;

int main()
{
    int N, i;
    int v[MAXN];

    scanf("%d", &N);
    for(i = 0; i < N; ++i)
        scanf("%d", &v[i]);

    sort(v, v+N);

    for(i = 0; i < N; ++i)
        (i != N - 1) ? printf("%d ", v[i]) : printf("%d\n", v[i]);

    return 0;
}