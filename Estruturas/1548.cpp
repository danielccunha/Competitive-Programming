#include <cstdio>
#include <algorithm>
#define MAXM 1000

using std::sort;

bool compara(int a, int b)
{
	return a > b;
}

int main()
{
	int N, M, i, cont;
	int v[MAXM];
	int aux[MAXM];

	scanf("%d", &N);
	while(N--)
	{
		scanf("%d", &M);

		for(i=0; i<M; ++i)
		{
			scanf("%d", &v[i]);
			aux[i] = v[i];
		}

		sort(v, v+M, compara);

		cont = 0;
		for(i=0; i<M; ++i)
			if(v[i] == aux[i])
				++cont;

		printf("%d\n", cont);
	}

	return 0;
}