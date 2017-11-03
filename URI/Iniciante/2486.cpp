#include <iostream>
#include <map>

using namespace std;

int T, N, qnt;
string food;
map<string, int> tabela;

int main() {
	tabela["suco de laranja"] = 120;
	tabela["morango fresco"] = 85;
	tabela["mamao"] = 85;
	tabela["goiaba vermelha"] = 70;
	tabela["manga"] = 56;
	tabela["laranja"] = 50;
	tabela["brocolis"] = 34;

	while(cin >> T && T != 0) {
		qnt = 0;

		while(T--) {
			cin >> N;
			cin.ignore();
			getline(cin, food);

			qnt += N * tabela[food];
		}

		if(qnt < 110)
			cout << "Mais " << 110-qnt << " mg\n";
		else if(qnt > 130)
			cout << "Menos " << qnt-130 << " mg\n";
		else
			cout << qnt << " mg\n";
	}

	return 0;
}