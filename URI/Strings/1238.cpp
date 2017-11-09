#include <iostream>

using namespace std;

int main()
{
    int N, i, t;
    string A, B, out;

    cin >> N;   // Número de casos
    while(N--)
    {
        cin >> A >> B;
        i = 0;
        out = "";

        (A.size() < B.size()) ? t = A.size() : t = B.size();

        while(i != t)
        {
            out.push_back(A[i]);
            out.push_back(B[i++]);
        }

        if(A.size() < B.size())
            A = B;

        while(i != A.size())
            out.push_back(A[i++]);

        cout << out << endl;
    }

    return 0;
}