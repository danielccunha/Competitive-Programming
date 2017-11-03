#include <iostream>
using namespace std;

int tmp, votos;
double qntMinima, N;
int main() {
	while(cin >> N) {
		qntMinima = (2*N)/3;
		votos = 0;
		while(N--) {
			cin >> tmp;
			if(tmp) ++votos;
		}

		(votos >= qntMinima) ? cout << "impeachment\n" : cout << "acusacao arquivada\n";
	}

	return 0;
}