#include <iostream>
using namespace std;

int main() {
	int N, D, i, tmp;
	int dia, mes, ano, diaV, mesV, anoV;
	bool dataValida;
	char aux;

	while(cin >> N >> D) {
		diaV = -1;

		while(D--) {
			dataValida = true;
			
			cin >> dia >> aux >> mes >> aux >> ano;
			for(i=0; i<N; ++i) {
				cin >> tmp;
				if(tmp == 0) dataValida = false;
			}

			if(dataValida && diaV == -1) {
				diaV = dia; 
				mesV = mes;
				anoV = ano;
			}
		}

		if(diaV != -1) {
			cout << diaV << "/" << mesV << "/" << anoV << "\n";
		} else {
			cout << "Pizza antes de FdI\n";
		}
	}
}