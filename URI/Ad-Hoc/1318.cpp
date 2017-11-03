#include <cstdio>
#include <map>

int main() {
	int N, M, cont, tmp;
	std::map<int, int> m;

	while(scanf("%d %d", &N, &M) && (N != 0 || M != 0)) {
		cont=0;
		while(M--) {
			scanf("%d", &tmp);
			m[tmp]++;
			if(m[tmp] == 2)	cont++;
		}
		printf("%d\n", cont);
		m.clear();
	}

	return 0;
}