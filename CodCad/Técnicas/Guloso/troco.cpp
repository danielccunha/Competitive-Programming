#include <cstdio>

int main()
{
    int N, i, q = 0;
    int M[6]{100, 50, 25, 10, 5, 1};

    scanf("%d", &N);

    for(i = 0; i < 6; ++i)
    {
        while(N >= M[i])
        {
            q++;
            N -= M[i];
        }
    }

    printf("%d\n", q);

    return 0;
}