#include <iostream>
#include <cmath>
using namespace std;

int N, M, i, j, tmp, dist;
int xJ, yJ; // Posição do Jogador
int xP, yP; // Posição do Pokemon

int main() {
	while(cin >> N >> M) {
		for(i=0; i<N; ++i) {
			for(j=0; j<M; ++j) {
				cin >> tmp;
				if(tmp == 1) {xJ = i+1; yJ = j+1;}
				if(tmp == 2) {xP = i+1; yP = j+1;}
			}
		}

		dist  = 0;
		dist += abs(xJ - xP);
		dist += abs(yJ - yP);
		cout << dist << "\n";
	}

	return 0;
}