#include <cstdio>

int main()
{
    int N, q = 0;
    char C;

    scanf("%d", &N);
    getchar();
    while(N--)
    {
        scanf("%c", &C);
        if(C == 'P' || C == 'C')
            q += 2;
        else if(C == 'A')
            q++;
    }

    printf("%d\n", q);

    return 0;
}