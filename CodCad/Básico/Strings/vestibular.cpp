#include <cstdio>
#define MAXN 81

int N, q = 0;
char gab[MAXN], res[MAXN];

int main()
{
    scanf("%d", &N);
    scanf("%s", gab);
    scanf("%s", res);

    for(int i = 0; i < N; ++i)
        if(gab[i] == res[i])
            q++;

    printf("%d\n", q);

    return 0;
}