#include <iostream>
using namespace std;

bool testaString(string DNA, string subString) {
	int cont, tamString = subString.size();
	int i;

	cont = 0;
	for(i=0; i<DNA.size(); ++i) {
		if(cont == tamString) break;
		if(DNA[i] == subString[cont]) 
			cont++;
		else if(cont != 0) 
			cont = 0;
	}

	return (cont == tamString) ;
}

int main() {
	string DNA, code;

	while(cin >> DNA >> code) {
		(testaString(DNA, code)) ? cout << "Resistente\n" : cout << "Nao resistente\n";
	}

	return 0;
}