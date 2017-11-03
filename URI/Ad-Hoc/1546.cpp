#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int N, K, tmp;
	string aux[]{"", "Rolien\n", "Naej\n", "Elehcim\n", "Odranoel\n"};
	
	scanf("%d", &N);
	while(N--) {
		scanf("%d", &K);
		while(K--) {
			scanf("%d", &tmp);
			cout << aux[tmp];
		}
	}

	return 0;
}