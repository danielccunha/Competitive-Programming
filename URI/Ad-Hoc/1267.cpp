#include <cstdio>
#include <cstring>
#define MAXN 100

int main()
{
	// N = alunos
	// D = jantares
	int N, D, i, j, tmp;
	bool v[MAXN], valido;

	while(scanf("%d %d", &N, &D) && !(N == 0 && D == 0))
	{
		memset(v, true, N);
		valido = false;

		for(i = 0; i < D; ++i)
			for(j = 0; j < N; ++j)
			{
				scanf("%d", &tmp);
				if(tmp == 0) v[j] = false;
				if(i == D-1 && v[j]) valido = true;
			}

		(valido) ? printf("yes\n") : printf("no\n");
	}

	return 0;
}