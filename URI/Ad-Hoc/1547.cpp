#include <cstdio>
#include <cmath>
int main() {
	int N, Q, S, i, k, aux;
	int al[10];

	scanf("%d", &N);
	while(N--) {
		k = -1;

		scanf("%d %d", &Q, &S);
		for(i=0; i<Q; ++i) {
			scanf("%d", &al[i]);
			if(al[i] == S && k == -1) k = i;
		}

		if(k != -1)
			printf("%d\n", k+1);
		else {
			k = 1;
			aux = std::abs(S - al[0]);
			for(i=1; i<Q; ++i) {
				if(std::abs(S - al[i]) < aux) {
					aux = std::abs(S - al[i]);
					k = i+1;
				}
			}
			printf("%d\n", k);
		}
	}

	return 0;
}