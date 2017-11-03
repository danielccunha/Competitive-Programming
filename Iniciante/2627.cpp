#include <iostream>
#include <map>
using namespace std;

map<char, int> alf;
int N, K, soma;
char c;

int main() {
	alf['a'] = 26; alf['b'] = 25; alf['c'] = 24; alf['d'] = 23;
	alf['e'] = 22; alf['f'] = 21; alf['g'] = 20; alf['h'] = 19;
	alf['i'] = 18; alf['j'] = 17; alf['k'] = 16; alf['l'] = 15;
	alf['m'] = 14; alf['n'] = 13; alf['o'] = 12; alf['p'] = 11;
	alf['q'] = 10; alf['r'] =  9; alf['s'] =  8; alf['t'] =  7;
	alf['u'] =  6; alf['v'] =  5; alf['w'] =  4; alf['x'] =  3;
	alf['y'] =  2; alf['z'] =  1;

	while(cin >> N >> K) {
		soma = 0;
		while(N--) {
			cin >> c;
			soma += alf[c];
		}

		(soma >= K) ? cout << "Aceita\n" : cout << "Rejeita\n";
	}

	return 0;
}