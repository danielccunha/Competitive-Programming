#include <cstdio>

int main() {
	int N, dias;
	double tmp;

	scanf("%d", &N);
	while(N--) {
		scanf("%lf", &tmp);

		dias = 0;
		while(tmp > 1) {
			tmp /= 2;
			dias++;
		}

		printf("%d dias\n", dias);
	}

	return 0;
}