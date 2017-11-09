#include <cstdio>

int main()
{
    int A;

    while(scanf("%d", &A) != EOF) {
        (A%6 == 0) ? printf("Y\n") : printf("N\n");
    }

    return 0;
}