#include <cstdio>

int collatz(int N, int V)
{
    if(N == 1)
        return V;
    
    V++;
    (N%2 == 0) ? N/=2 : N = 3*N + 1;
    return collatz(N, V);
}

int main()
{
    int N, V = 0;

    scanf("%d", &N);
    printf("%d\n", collatz(N, V));
    
    return 0;
}