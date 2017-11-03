#include <cstdio>
#include <algorithm>
#define MAX 1000

struct ind {
	int v, i;
};

bool compara(ind A, ind B) {
	return A.v > B.v;
}

int main() {
	int N, i;
	ind  S[MAX];

	while(scanf("%d", &N) && N!=0) {
		for(i=0; i<N; ++i) {
			scanf("%d", &S[i].v);
			S[i].i = i+1;
		}
		std::sort(S, S+N, compara);
		printf("%d\n", S[1].i);
	}

	return 0;
}