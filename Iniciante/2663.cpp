#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> notas;
	int N, K, tmp, Q=0;

	cin >> N >> K;
	while(N--) {
		cin >> tmp;
		notas.push_back(tmp);
	}

	sort(notas.rbegin(), notas.rend());
	notas.push_back(0);

	for(unsigned int i=0; i<notas.size(); ++i) {
		++Q;
		if(Q >= K && notas[i] != notas[i+1]) break;
	}

	cout << Q << "\n";

	return 0;
}