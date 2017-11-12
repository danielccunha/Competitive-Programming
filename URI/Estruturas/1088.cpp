#include <cstdio>
#include <vector>

using std::vector;

#define INF 112345

// função merge_sort que ordena um vector v | retirada de http://www.codcad.com/lesson/37
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

int main()
{
	int N, i;
	vector<int> v;

	while(scanf("%d", &N) && N != 0)
	{
		v.resize(N);
		for(i = 0; i < N; ++i)
			scanf("%d", &v[i]);
		
		i = merge_sort(v);
		(i%2 == 0) ? printf("Carlos\n") : printf("Marcelo\n");
	}

	return 0;
}