#include <iostream>
using namespace std;

string list[11]{"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

int main() {
	int C, X, Y;

	cin >> C;
	while(C--) {
		cin >> X >> Y;
		cout << list[X+Y] << "\n";
	}

	return 0;
}