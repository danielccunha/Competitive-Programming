#include <cstdio>
#include <algorithm>
#define MAXN 10000

struct Consulta
{
    int i, f;
};

bool compara(Consulta a, Consulta b)
{
    return a.f < b.f;
}

int main()
{
    int N, i;
    int ult = 0, nC = 0;
    Consulta agn[MAXN];

    scanf("%d", &N);
    for(i = 0; i < N; ++i)
        scanf("%d %d", &agn[i].i, &agn[i].f);

    std::sort(agn, agn + N, compara);

    for(i = 0; i < N; ++i)
    {
        if(agn[i].i >= ult)
        {
            nC++;
            ult = agn[i].f;
        }
    }
    
    printf("%d\n", nC);

    return 0;
}