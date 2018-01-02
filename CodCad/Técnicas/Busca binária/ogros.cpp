#include <cstdio>
#define MAXN 100000

int N, M, i, tmp;
int F[MAXN], P[MAXN];

int buscaB(int K)
{
    int min = 1, max = N - 1, mid;

    while(min <= max)
    {
        mid = (min+max)/2;

        if(K >= F[mid] && K < F[mid+1])
            return mid;
        else if(F[mid] > K)
            max = mid - 1;
        else
            min = mid + 1;
    }

    return 0; // Caso de erro
}

int main()
{
    F[0] = 0;

    scanf("%d %d", &N, &M);
    for(i = 1; i < N; ++i)
        scanf("%d", &F[i]);

    for(i = 0; i < N; ++i)
        scanf("%d", &P[i]);

    for(i = 0; i < M; ++i)
    {
        scanf("%d", &tmp);
        
        if(tmp < F[1])
            printf("%d", P[0]);
        else if(tmp > F[N-1])
            printf("%d", P[N-1]);
        else
            printf("%d", P[buscaB(tmp)]);

        (i != M-1) ? printf(" ") : printf("\n");
    }

    return 0;
}