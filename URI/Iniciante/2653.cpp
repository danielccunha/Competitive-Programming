#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, bool> j;
	string aux;
	int qnt=0;

	while(cin >> aux) {
		if(!j[aux]) {
			++qnt;
			j[aux] = true;
		}
	}

	cout << qnt << "\n";

	return 0;
}