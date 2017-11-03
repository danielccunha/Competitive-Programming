#include <cstdio>
#include <cmath>

int numDigts(long long number)
{
    int digits = 0;

    while(number)
    {
        number /= 10;
        digits++;
    }

    return digits;
}

int main()
{
    int N;
    long long X, Y, Z, valor;

    scanf("%d", &N);
    while(N--)
    {
        scanf("%lld %lld", &X, &Y);
        
        Z = numDigts(Y);
        Z = ceil(pow(10, Z));

        valor = X%Z;

        printf("%s\n", (valor == Y) ? "encaixa" : "nao encaixa");
    }

    return 0;
}