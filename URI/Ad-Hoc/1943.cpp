#include <cstdio>

int main()
{
	int N, p = 0;
	int v[]{100, 50, 25, 10, 5, 3, 1};

	scanf("%d", &N);
	while(p != 6 && N <= v[p+1]) ++p;

	printf("Top %d\n", v[p]);

	return 0;
}