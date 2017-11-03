#include <cstdio>
#include <cstring>
#define MAX 31
using namespace std;

int main() {
	int N, M, qnt;
	int botas[MAX][2];
	char L;

	while(scanf("%d", &N) != EOF) {
		qnt = 0;
		memset (botas, 0 , sizeof(botas));

		while(N--) {
			scanf("%d %c", &M, &L);
			M -= 30;
			if(L == 'D') {
				if(botas[M][0] > 0) {
					--botas[M][0];
					++qnt;
				} else
					++botas[M][1];
			} else {
				if(botas[M][1] > 0) {
					--botas[M][1];
					++qnt;
				} else
					++botas[M][0];
			}
		}

		printf("%d\n", qnt);
	}

	return 0;
}