#include <cstdio>

int main()
{
	int N, lA, lB, sA, sB;

	scanf("%d", &N);
	scanf("%d %d", &lA, &lB);
	scanf("%d %d", &sA, &sB);

	(N < lA || N > lB || N < sA || N > sB) ? printf("impossivel\n") : printf("possivel\n");

	return 0;
}