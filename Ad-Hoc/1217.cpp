#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {	
	int N, cont;
	cin >> N;
	cin.ignore();

	string tmp, aux;
	stringstream ss;

	double gastoTotal=0, kgTotal=0, gastoX;

	for(int i=1; i<=N; ++i) {
		cin >> gastoX;
		cin.ignore();
		gastoTotal+=gastoX;

		getline(cin, tmp);
		ss << tmp;
	
		cont = 0;
		while(ss >> aux) cont++;
		ss.clear();
		kgTotal += cont;

		cout << "day " << i << ": " << cont << " kg\n";
	}

	kgTotal    = kgTotal/N;
	gastoTotal = gastoTotal/N;

	cout << fixed << setprecision(2);
	cout << kgTotal << " kg by day\n";
	cout << "R$ " << gastoTotal << " by day\n";

	return 0;
}