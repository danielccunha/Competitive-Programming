#include <cstdio>

int main()
{
    long long A, B, S;
    scanf("%lld %lld", &A, &B); 
    
    S = (A + B) * (B - A + 1) / 2;
    printf("%lld\n", S);

    return 0;
}