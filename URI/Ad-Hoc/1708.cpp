#include <cstdio>

int main()
{
    int X, Y, dif, n;
    scanf("%d %d", &X, &Y);

    dif = Y - X;
    n = (X / dif) + 1;
    if((X % dif) != 0) n++;

    printf("%d\n", n);

    return 0;
}