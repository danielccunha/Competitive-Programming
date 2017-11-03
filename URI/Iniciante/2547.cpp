#include <iostream>
using namespace std;

int main() {
	int N, aMin, aMax, tmp, qnt;
	
	while(cin >> N >> aMin >> aMax) {
		qnt = 0;
		while(N--) {
			cin >> tmp;
			if(tmp >= aMin && tmp <= aMax) qnt++;
		}
		cout << qnt << "\n";
	}

	return 0;
}