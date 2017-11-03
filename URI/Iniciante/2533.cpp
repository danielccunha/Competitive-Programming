#include <iostream>
#include <iomanip>
using namespace std;

int M, N, C;
double result, sum, divisor;

int main() {
	while(cin >> M) {
		sum = divisor = 0;

		while(M--) {
			cin >> N >> C;
			sum += N*C;
			divisor += C;
		}

		result = sum/(divisor*100);
		cout << fixed << setprecision(4);
		cout << result << "\n";
	}

	return 0;
}