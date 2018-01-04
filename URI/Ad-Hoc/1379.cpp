#include <cstdio>
#include <algorithm>

using std::swap;

int main()
{
    int A, B;

    while(scanf("%d %d", &A, &B) != EOF)
    {
        if(A == B && B == 0) break;
        if(A > B) swap(A, B);
        printf("%d\n", (A - (B - A)));
    }

    return 0;
}