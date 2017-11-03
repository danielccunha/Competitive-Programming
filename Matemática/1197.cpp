#include <cstdio>

int main() {
	double v, t, a, S;

	while(scanf("%lf %lf", &v, &t) != EOF) {
		a = 0;
		if(t != 0) a = v/t;

		t *= 2;
		S = a*t*t/2;
		printf("%0.lf\n", S);
	}

	return 0;
}