#include <iostream>

using namespace std;

int N, I, i, j, qnt;

int main() {
	while(cin >> N >> I) {
		qnt = 0;
		while(N--) {
			cin >> i >> j;
			if(i == I && j == 0) qnt++;
		}
		cout << qnt << "\n";
	}

	return 0;
}