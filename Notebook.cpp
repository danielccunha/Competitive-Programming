// Calcula se o número é primo rapidamente
#include <cstdio>
#include <cmath>

bool isPrime(int n)
{
	if(n < 5 || n%2== 0 || n%3 == 0)
		return (n == 2 || n == 3);

	int maxP = sqrt(n)+2;
	
	for(int p=5; p<maxP; p+=6)
		if(n%p==0||n%(p+2)==0)
			return false;

	return true;
}

// Ler string com fgets
fgets(nome_da_string, tam_string, stdin);

// Calcular o número de inversões em uma ordenação | Retirado de http://www.codcad.com/lesson/37
#include <vector> // para o uso de vector
using std::vector;

// neste código, irei definir INF como 1 bilhão
#define INF 1000000000

// função merge_sort que ordena um vector v
int merge_sort(vector<int> &v)
{
	if(v.size() == 1) return 0;

	int inv = 0;
	vector<int> u1, u2;
	
	for(int i = 0; i < (int)v.size()/2; i++)
		u1.push_back(v[i]);
	
	for(int i = (int)v.size()/2; i < (int)v.size(); i++)
	 	u2.push_back(v[i]);
	
	inv+=merge_sort(u1);
	inv+=merge_sort(u2);
	
	u1.push_back(INF);
	u2.push_back(INF);
	
	int ini1 = 0, ini2 = 0;
	
	for(int i = 0; i < (int)v.size(); i++)
	{
		if(u1[ini1] <= u2[ini2])
		{
			v[i] = u1[ini1];
			ini1++;
		}
		else
		{
			
			v[i] = u2[ini2];
			ini2++;
			
			inv += u1.size() - ini1 - 1;
		}
	}
	
	return inv;
}

// Passar valor de inteiro para string
sprintf(var_string, "%d", var_inteiro);