#include <cstdio>
using namespace std;

int main() {
	int L, R;

	while(scanf("%d %d", &L, &R)) {
		if(L == R && L == 0) break;
		printf("%d\n", L+R);
	}

	return 0;
}