#include <cstdio>

int main() {
	int i, tmp, aux[5];
	bool valido = true;

	for(i=0; i<5; ++i) scanf("%d", &aux[i]);
	for(i=0; i<5; ++i) {
		scanf("%d", &tmp);
		if(tmp == aux[i]) valido = false;
	}

	(valido) ? printf("Y\n") : printf("N\n");

	return 0;
}