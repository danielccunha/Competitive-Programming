#include <cstdio>
#include <algorithm>

int main()
{
    int N, p[3], q = 0;

    scanf("%d", &N);
    for(int i = 0; i < 3; ++i)
        scanf("%d", &p[i]);

    std::sort(p, p+3);

    for(int i = 0; i < 3; ++i)
        if(p[i] <= N)
        {
            q++;
            N -= p[i];
        }

    printf("%d\n", q);

    return 0;
}