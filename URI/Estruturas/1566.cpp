// Tempo de execução horrível (0.900), mas resolve o problema da alocação
// de memória para 3000000 de inteiros
#include <cstdio>
#include <cstring>

int main()
{
    int N, C, h, i;
    int v[211];

    scanf("%d", &N);
    while(N--)
    {
        memset(v, 0, sizeof(v));
        scanf("%d", &C);
        for(i = 0; i < C; ++i)
        {
            scanf("%d", &h);
            v[h-20]++;
        }

        for(i = 0; i < 211; ++i)
        {
            while(v[i]--)
            {
                (C != 1) ? printf("%d ", i+20) : printf("%d\n", i+20);
                C--;
            }
            if(C == 0) break;
        }
    }

    return 0;
}