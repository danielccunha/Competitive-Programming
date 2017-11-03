#include <iostream>

using namespace std;

string letras;
int N, tmp;

int main() {
	while(cin >> letras) {
		cin >> N;
		while(N--) {
			cin >> tmp;
			cout << letras[tmp-1];
		}
		cout << endl;
	}

	return 0;
}