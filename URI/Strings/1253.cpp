#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    string cipher;
    int L, tam, i;

    while(N--)
    {
        getline(cin, cipher);
        cin >> L;
        cin.ignore();

        tam = cipher.size();
        for(i = 0; i < tam; ++i)
        {
            cipher[i] -= L;
            if(cipher[i] < 'A')
                cipher[i] += 26;
        }

        cout << cipher << endl;
    }

    return 0;
}