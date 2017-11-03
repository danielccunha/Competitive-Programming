#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
	int N, W, H;
	string tmp, S;
	stringstream ss;

	cin >> N >> W;
	cin.ignore();

	while(N--) {
		S = "";
		H = 0;

		while(cin >> tmp) {
			if(!isdigit(tmp[0])) {
				if(S == "")
					S += tmp;
				else {
					S += " ";
					S += tmp;
				}
			} else {
				break;
			}
		}
		
		ss << tmp;
		ss >> H;
		ss.clear();
		if(H > W) cout << S << endl;
	}
}