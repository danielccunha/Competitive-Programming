#include <iostream>
#define MAXN 100
using namespace std;

int N, M, L, i, j;
int mM[MAXN][MAXN], mL[MAXN][MAXN];
int eM, eL, A;
/*
	@N número de atributos
	@M número de cartas do Marcos
	@L número de cartas do Leonardo
	@mM e @mL matrizes que irão representar os atributos das cartas
*/

int main() {
	while(cin >> N) {
		cin >> M >> L;
		
		for(i=0; i<M; ++i) {
			for(j=0; j<N; ++j) {
				cin >> mM[i][j];
			}
		}

		for(i=0; i<L; ++i) {
			for(j=0; j<N; ++j) {
				cin >> mL[i][j];
			}
		}

		cin >> eM >> eL;
		cin >> A;
		eM--; eL--; A--;

		M = mM[eM][A];
		L = mL[eL][A];
		if(M == L)
			cout << "Empate\n";
		else if(M > L)
			cout << "Marcos\n";
		else
			cout << "Leonardo\n";
	}

	return 0;
}