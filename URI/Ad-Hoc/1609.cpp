#include <cstdio>
#include <map>
using std::map;

int T, N, s, tmp;

int main()
{
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &N);
        s = 0;
        map<int, bool> B;

        while(N--)
        {
            scanf("%d", &tmp);
            if(!B[tmp - 1])
            {
                s++;
                B[tmp - 1] = true;
            }
        }

        printf("%d\n", s);
    }

    return 0;
}