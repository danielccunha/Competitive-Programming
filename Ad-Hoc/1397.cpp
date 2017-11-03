#include <cstdio>

int main() {
	int N, A, B;
	int X, Y;

	while(scanf("%d", &N) && N!=0) {
		X = Y = 0;
		while(N--) {
			scanf("%d %d", &A, &B);
			if(A != B) (A > B) ? ++X : ++Y;
		}
		printf("%d %d\n", X, Y);
	}

	return 0;
}