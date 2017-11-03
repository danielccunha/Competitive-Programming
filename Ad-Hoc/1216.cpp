#include <iostream>
using namespace std;

int main() {
	string tmp;
	double sum, div, x;

	sum = div = 0;
	while(getline(cin, tmp)) {
		cin >> x;
		cin.ignore();

		sum += x;
		++div;
	}

	x = sum/div;
	cout.precision(1);
	cout.setf(ios::fixed);
	cout << x << "\n";

	return 0;
}