// Mestre das gambiarras
#include <cstdio>

int hanoi(int N)
{
    if(N == 0)
        return 0;
    
    return 1 + 2*hanoi(N-1);
}

int main()
{
    int N, C = 0, q;

    while(scanf("%d", &N) && N!=0)
    {
        q = hanoi(N);          

        printf("Teste %d\n", ++C);
        printf("%d\n\n", q);
    } 

    return 0;
}