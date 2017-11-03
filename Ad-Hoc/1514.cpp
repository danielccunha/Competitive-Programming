#include <cstdio>
#include <cstring>
#define MAX 100
using namespace std;

int main() {
	int N, M, i, j;
	int tmp, comp[MAX], prob[MAX];
	bool nRT, tPU, nPT;
	
	/*
		@N = número de competidores
		@M = número de problemas

		@comp[MAX] = Quantidade de problemas resolvidos pelo competidor @i
		@prob[MAX] = Quantidade de pessoas que resolveram o problema @j

		1 @nRT = Ninguem resolveu todos os problemas
		2 @tPU = Todo problema foi resolvido pelo menos uma vez
		3 @nPT = Não há problema resolvido por todos
		4 @tRU = Todos resolveram pelo menos um problema (consequência de os outros serem verdadeiros)
	*/

	while(scanf("%d %d", &N, &M)) {
		if(N == M && M == 0) break;
		memset(prob, 0, sizeof(prob));
		memset(comp, 0, sizeof(comp));

		for(i=0; i<N; ++i) {
			for(j=0; j<M; ++j) {
				scanf("%d", &tmp);
				if(tmp == 1) {
					comp[i]++;
					prob[j]++;
				}
			}
		}

		nRT = true;
		for(i=0; i<N; ++i) {
			if(comp[i] == M) nRT = false;
			if(!nRT) break;
		}

		if(!nRT)
			printf("1\n");
		else {			
			tPU = nPT = true;
			for(j=0; j<M; ++j) {
				if(prob[j] == 0) tPU = false;
				if(prob[j] == N) nPT = false;
				if(!tPU && !nPT) break;
			}

			if(!tPU) {
				printf("2\n");
			} else {
				(!nPT) ? printf("3\n") : printf("4\n");
			}

		}
	}

	return 0;
}