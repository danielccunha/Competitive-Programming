#include <cstdio>
#include <cstring>
#define MAX 10000
int main() {
	int N, R, tmp, i;
	bool v[MAX];

	while(scanf("%d %d", &N, &R) != EOF) {
		memset(v, false, N);
		for(i=0; i<R; ++i) {
			scanf("%d", &tmp);
			v[tmp-1] = true;
		}
		if(N == R)
			printf("*\n");
		else {
			for(i = 0; i < N; ++i) {
				if(!v[i]) printf("%d ", i+1);
			}
			printf("\n");
		}
	}

	return 0;
}