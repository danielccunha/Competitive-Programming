#include <iostream>
#define MAX 50

using std::cin;
using std::cout;

int main()
{
	int N, T, i, cont;
	int v[MAX];
	char c;

// Se ele ficar parado e o tiro estiver na altura 1 ou 2, ele será atingido. 
// Se ele pular e o tiro estiver a uma altura maior que 2, então ele também será atingido.

	cin >> N;
	while(N--)
	{
		cont = 0;

		cin >> T;
		for(i = 0; i < T; ++i)
			cin >> v[i];

		for(i = 0; i < T; ++i)
		{
			cin >> c;
			if((c == 'S' && v[i] <= 2) || (c == 'J' && v[i] > 2))
				++cont;
		}

		cout << cont << "\n";		
	}
	
	return 0;
}