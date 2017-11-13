#include <cstdio>
#include <algorithm>

struct Pais
{
    int O, P, B, ind;
    Pais()
    {
        O = P = B = 0;
    }
};

bool cmp(Pais A, Pais B)
{
    return  A.O > B.O || 
            (A.O == B.O && A.P > B.P) || 
            (A.O == B.O && A.P == B.P && A.B > B.B) || 
            (A.O == B.O && A.P == B.P && A.B == B.B && A.ind < B.ind);
}

int main()
{
    int N, M, i, O, P, B;
    scanf("%d %d", &N, &M);

    Pais tabela[N];
    for(i = 0; i < N; ++i)
        tabela[i].ind = i + 1;

    for(i = 0; i < M; ++i)
    {
        scanf("%d %d %d", &O, &P, &B);
        tabela[O-1].O++;
        tabela[P-1].P++;
        tabela[B-1].B++;
    }

    std::sort(tabela, tabela+N, cmp);

    for(i = 0; i < N; ++i)
        (i != N-1) ? printf("%d ", tabela[i].ind) : printf("%d\n", tabela[i].ind);
    
    return 0;
}