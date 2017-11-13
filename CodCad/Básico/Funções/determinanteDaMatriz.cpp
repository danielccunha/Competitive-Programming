#include <iostream>

using namespace std;

int det(int m[][3]){
	int A, B;
    
    A = (m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m[2][0]) + (m[0][2] * m[1][0] * m[2][1]);
    B = (m[0][0] * m[1][2] * m[2][1]) + (m[0][1] * m[1][0] * m[2][2]) + (m[0][2] * m[1][1] * m[2][0]);

    return A - B;
}

int main(){
	
	int m[3][3];
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin >> m[i][j];

	cout << det(m) << "\n";
}