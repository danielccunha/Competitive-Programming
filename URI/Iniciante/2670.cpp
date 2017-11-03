#include <iostream>
using namespace std;

int main() {
	int  A,  B,  C;
	int tA, tB, tC;

	cin >> A >> B >> C;

	tA = B * 2 + C * 4;
	tB = A * 2 + C * 2;
	tC = A * 4 + B * 2;

	if(tA <= tB && tA <= tC)
		cout << tA << endl;
	else if(tB <= tA && tB <= tC)
		cout << tB << endl;
	else
		cout << tC << endl;

	return 0;
}