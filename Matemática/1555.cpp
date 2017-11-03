#include <cstdio>
#include <cmath>
using std::pow;

int main()
{
    int N, x, y, R, B, C;
    scanf("%d", &N);

    // Rafael: r(x, y) = (3x)² + y².    
    // Beto:   b(x, y) = 2(x²) + (5y)².
    // Carlos: c(x, y) = -100x + y³.

    while(N--)
    {
        scanf("%d %d", &x, &y);

        R = pow(3*x, 2) + pow(y, 2);
        B = 2*pow(x, 2) + pow(5*y, 2);
        C = -100*x + pow(y, 3);

        if(R > B && R > C)
            printf("Rafael ganhou\n");
        else if(B > C)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
    
    return 0;
}