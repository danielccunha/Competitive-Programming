#include <cstdio>
#include <cstring>

#define N 1001

int main()
{
    int C;
    char A[N], B[N], out[N];

    scanf("%d", &C);
    while(C--)
    {
        scanf("%s %s", A, B);
        strcpy(out, &A[strlen(A) - strlen(B)]);

        (strcmp(out, B) == 0) ? printf("encaixa\n") : printf("nao encaixa\n");
    }

    return 0;
}