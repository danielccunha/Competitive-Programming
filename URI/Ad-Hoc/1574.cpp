#include <iostream>
#include <cstdio>
#include <vector>

using std::cin;
using std::cout;
using std::string;

int main()
{
	int T, N, p, i;
	string tmp;

	scanf("%d", &T);

	while(T--)
	{
		std::vector<int> v;
		p = 0;
		scanf("%d", &N);
		cin.ignore();

		while(N--)
		{
			cin >> tmp;
			if(tmp == "LEFT")
			{
				--p;
				v.push_back(-1);
			}
			else if(tmp == "RIGHT")
			{
				++p;
				v.push_back(1);
			}
			else
			{
				cin >> tmp >> i;
				p += v[i-1];
				v.push_back(v[i-1]);
			}
		}
		printf("%d\n", p);
	}

	return 0;
}