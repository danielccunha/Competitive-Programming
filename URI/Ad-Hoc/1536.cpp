#include <cstdio>

struct Time {
	int SG, GF, pontos;

	Time() {
		this->SG = this->GF = this->pontos = 0;
	}
};

void lePlacar(Time &M, Time &V) {
	int m, v;
	scanf("%d x %d", &m, &v);

	M.SG += (m-v);

	V.SG += (v-m);
	V.GF += v;

	if(m == v) {
		M.pontos += 1;
		V.pontos += 1;
	}
	else if(m > v)
		M.pontos += 3;
	else
		V.pontos += 3;
}

int main() {
	int N;
	scanf("%d", &N);
	
	while(N--) {
		Time A, B;
		lePlacar(A, B);
		lePlacar(B, A);

		if(A.pontos > B.pontos || (A.pontos == B.pontos && (A.SG > B.SG || (A.SG == B.SG && A.GF > B.GF))))
			printf("Time 1\n");
		else if(B.pontos > A.pontos || (B.pontos == A.pontos && (B.SG > A.SG || (B.SG == A.SG && B.GF > A.GF))))
			printf("Time 2\n");
		else
			printf("Penaltis\n");
	}

	return 0;
}