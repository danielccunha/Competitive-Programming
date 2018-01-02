#include <cstdio>
#include <vector>
#include <algorithm>

using std::min;
using std::max;
using std::vector;

int main()
{
    int N, M, i, last = -1, tmp;
    long long res = 0;
    vector<int> A;

    scanf("%d %d", &N, &M);

    for(i = 0; i < N; ++i)
    {
        scanf("%d", &tmp);

        if(min(tmp, M - tmp) >= last)
        {
            last = min(tmp, M - tmp);
            A.push_back(last);
            res += last;
        }
        else if(max(tmp, M - tmp) >= last)
        {
            last = max(tmp, M - tmp);
            A.push_back(last);
            res += last;
        }
        else
        {
            printf("-1\n");
            return 0;
        }
    }

    printf("%lld\n", res);

    return 0;
}