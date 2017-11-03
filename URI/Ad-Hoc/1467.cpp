#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int A, B, C;

	while(cin >> A >> B >> C) {
		if(A != B && B == C)
			printf("A\n");
		else if(B != C && C == A)
			printf("B\n");
		else if(C != A && A == B)
			printf("C\n");
		else
			printf("*\n");
	}

	return 0;
}