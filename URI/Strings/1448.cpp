#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, cont=0;
	int pA, pB, i;
	bool found;
	cin >> t;
	cin.ignore();
	string s1, s2, sC;


	while(t--) {
		getline(cin, sC);
		getline(cin, s1);
		getline(cin, s2);		

		pA = pB = 0;
		for(i=0; i<(int)sC.size(); ++i) {
			if(s1[i] == sC[i]) ++pA;
			if(s2[i] == sC[i]) ++pB;
		}

		cout << "Instancia " << ++cont << "\n";
		if(pA > pB)
			cout << "time 1\n\n";
		else if(pB > pA)
			cout << "time 2\n\n";
		else if(pB == (int)sC.size())
			cout << "empate\n\n";
		else {
			found = false;
			for(i=0; i<(int)sC.size(); ++i) {
				if(s1[i] == sC[i] && s2[i] != sC[i]) {
					cout << "time 1\n\n";
					found = true;
					break;
				}

				if(s2[i] == sC[i] && s1[i] != sC[i]) {
					cout << "time 2\n\n";
					found = true;
					break;
				}
			}
			if(!found) cout << "empate\n\n";
		}
	}
}