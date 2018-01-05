#include <cstdio>

int main()
{
    int T, N, i, caso = 0;
    int v[11];

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &N);
        for(i = 0; i < N; i++)
            scanf("%d", &v[i]);

        printf("Case %d: %d\n", ++caso, v[N/2]);
    }
}