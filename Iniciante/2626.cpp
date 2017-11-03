#include <iostream>

using namespace std;

/*
	Dôdo, Leo e Pepper
	Strings @D, @L e @P indicando as escolhas

	Dôdo: Os atributos dos monstros vao ser inteligencia, sabedoria...
	Leo: Iron Maiden’s gonna get you, no matter how far!
	Pepper: Urano perdeu algo muito precioso...
	Empate: Putz vei, o Leo ta demorando muito pra jogar...
*/

bool validar(string A, string B, string C) {
	if((A == "pedra" && B == C && C == "tesoura") || (A == "papel" && B == C && C == "pedra") || (A == "tesoura" && B == C && C == "papel"))
		return true;
	else
		return false;
}

int main() {
	string D, L, P;
	int result;

	while(cin >> D >> L >> P) {
		if(validar(D, L, P))
			cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
		else if(validar(L, D, P))
			cout << "Iron Maiden's gonna get you, no matter how far!\n";
		else if(validar(P, L, D))
			cout << "Urano perdeu algo muito precioso...\n";
		else
			cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
	}

	return 0;
}