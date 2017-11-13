#include <cstdio>
#include <algorithm>
#include <vector>
#define MAXN 112345

int main()
{
    int N, i, q;
    int orig[MAXN], ord[MAXN];

    scanf("%d", &N);

    for(i = 0; i < N; ++i)
    {
        scanf("%d", &orig[i]);
        ord[i] = orig[i];
    }

    std::sort(ord, ord + N);
    q = 0;
    std::vector<int> fora;

    for(i = 0; i < N; ++i)
    {
        if(ord[i] != orig[i])
        {
            q++;
            fora.push_back(ord[i]);
        }
    }

    printf("%d\n", q);
    for(i = 0; i < (int)fora.size(); ++i)
        (i != fora.size()-1) ? printf("%d ", fora[i]) : printf("%d\n", fora[i]);

    return 0;
}