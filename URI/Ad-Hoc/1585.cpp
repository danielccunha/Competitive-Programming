#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int N, x, y;

	scanf("%d", &N);
	while(N--) {
		scanf("%d %d", &x, &y);
		x = floor((x * y)/2);
		printf("%d cm2\n", x);
	}

	return 0;
}