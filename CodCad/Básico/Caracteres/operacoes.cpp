#include <cstdio>
#include <cstdlib>

int main()
{
    char M;
    double A, B;

    scanf("%c", &M);
    scanf("%lf %lf", &A, &B);

    (M == 'M') ? A *= B : A /= B;

    printf("%.2lf\n", A);

    return 0;
}