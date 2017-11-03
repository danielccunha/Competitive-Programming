#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, Q, tmp;
/*
	@N número de habitantes do país
	@Q número de consultas
*/

int main() {
	while(cin >> N >> Q) {
		vector<int> notas;
		while(N--) {
			cin >> tmp;
			notas.push_back(tmp);
		}
	
		sort(notas.rbegin(), notas.rend());

		while(Q--) {
			cin >> tmp;
			cout << notas[tmp-1] << "\n";
		}
	}

	return 0;
}