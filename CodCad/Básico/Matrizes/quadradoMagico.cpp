#include <cstdio>
#define MAXN 10

int main()
{
    int m[MAXN][MAXN], N, i, j;
    int s = 0, tmp = 0, tmpB;

    scanf("%d", &N);
    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
            scanf("%d", &m[i][j]);

    // Calcula a soma das diagonais para ter como base
    for(i = 0; i < N; ++i)
        s += m[i][i];

    for(i = N-1; i >= 0; --i)
        tmp += m[N-1-i][i];

    // Caso os valores forem iguais, segue a validação
    if(s == tmp)
    {
        // Valida as linhas e colunas
        for(i = 0; i < N; ++i)
        {
            tmp = tmpB = 0;
            for(j = 0; j < N; ++j)
            {
                tmp  += m[i][j];
                tmpB += m[j][i];
            }

            if(tmp != s || tmpB != s)
            {
                s = -1;
                break;
            }
        }
    }
    // Caso contrário, s se torna -1 e finaliza o programa
    else
        s = -1;

    printf("%d\n", s);

    return 0;
}