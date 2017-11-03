#include <cstdio>
using namespace std;

int main() {
	int N, R, X, Y;

	while(scanf("%d", &N) && N!=0) {
		X = Y = 0;
		while(N--) {
			scanf("%d", &R);
			(R == 0) ? ++X : ++Y;
		}
		printf("Mary won %d times and John won %d times\n", X, Y);
	}

	return 0;
}