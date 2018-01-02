#include <cstdio>
#define MAXN 100000

int N, K, i;
int L[MAXN];

int binS(int V, int min)
{
    int max = N - 1, mid;

    while(min <= max)
    {
        mid = (min+max)/2;

        if(V + L[mid] == K)
            return mid;
        else if(V + L[mid] < K)
            min = mid + 1;
        else
            max = mid - 1;
    }

    return -1;
}

int main()
{
    scanf("%d", &N);
    for(i = 0; i < N; ++i)
        scanf("%d", &L[i]);

    scanf("%d", &K);
    for(i = 0; i < N; ++i)
        if(binS(L[i], i+1) != -1)
            printf("%d %d\n", L[i], L[binS(L[i], i+1)]);

    return 0;
}