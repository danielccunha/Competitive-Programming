// 12 grãos = uma grama
#include <cstdio>
#include <cmath>

using std::pow;

int main()
{
    int N, X;
    long long g;

    scanf("%d", &N);
    while(N--)
    {
        scanf("%d", &X);
        g = pow(2, X)/12000;
        printf("%lld kg\n", g);
    }

    return 0;
}