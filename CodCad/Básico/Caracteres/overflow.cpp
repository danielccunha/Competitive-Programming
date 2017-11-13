#include <cstdio>

int main()
{
    char M;
    int N, P, Q;

    scanf("%d", &N);
    scanf("%d %c %d", &P, &M, &Q);

    (M == '+') ? P += Q : P *= Q;
    (P <= N) ? printf("OK\n") : printf("OVERFLOW\n");

    return 0;
}