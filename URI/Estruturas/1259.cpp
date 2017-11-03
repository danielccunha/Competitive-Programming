#include <cstdio>
#include <vector>
#include <algorithm>

bool valida(int a, int b) {
	return (a%2 == 0 && b%2 == 1) || (a%2 == 0 && b%2 == 0 && a < b) || (a%2 == 1 && b%2 == 1 && a > b);
}

int main() {
	int N, tmp;
	scanf("%d", &N);

	std::vector<int> v;
	while(N--) {
		scanf("%d", &tmp);
		v.push_back(tmp);
	}

	std::sort(v.begin(), v.end(), valida);

	for(int i=0; i<v.size(); ++i)
		printf("%d\n", v[i]);

	return 0;
}