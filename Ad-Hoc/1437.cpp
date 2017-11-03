#include <iostream>
using namespace std;

int main() {
	/*
		D:
			- 0: norte
			- 1: leste
			- 2: sul
			- 3: oeste
	*/
	int N, D; 
	char c;	
	char dir[]{'N', 'L', 'S', 'O'};

	while(cin >> N && N!=0) {
		D = 0;
		while(N--) {
			cin >> c;

			if(c == 'D') {
				if(D == 3)
					D = 0;
				else
					++D;
			} else {
				if(D == 0)
					D = 3;
				else
					--D;
			}
		}

		cout << dir[D] << "\n";
	}

	return 0;
}