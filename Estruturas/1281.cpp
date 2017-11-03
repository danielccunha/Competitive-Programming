#include <iostream>
#include <map>
#include <iomanip>

using std::cin;
using std::string;
using std::map;

int main()
{
    int N, M, qtd;
    string nome;
    double preco, final;
    map<string, double> m;	

    cin >> N;

    while(N--)
    {
        cin >> M;
        while(M--)
        {
            cin >> nome >> preco;
            m[nome] = preco;
        }

        final = 0;
        
        cin >> M;
        while(M--)
        {
            cin >> nome >> qtd;
            final += m[nome]*qtd;
        }

        std::cout << "R$ " << std::fixed << std::setprecision(2) << final << std::endl;
    }
    
	return 0;
}