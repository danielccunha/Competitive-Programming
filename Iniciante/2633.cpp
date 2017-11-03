#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct carne{
	string nome;
	int    data;
};

bool compara(carne a, carne b) {
	return a.data < b.data;
}

int main() {
	carne tmp;
	int N;

	while(cin >> N) {
		vector<carne> v;
		while(N--) {
			cin >> tmp.nome >> tmp.data;
			v.push_back(tmp);
		}

		sort(v.begin(), v.end(), compara);

		for(int i=0; i<v.size(); ++i) {
			cout << v[i].nome;
			(i != v.size()-1) ? cout << " " : cout << "\n";
		}
	}

	return 0;
}