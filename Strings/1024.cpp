#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    string plain;
    int tam, i, j;

    while(N--)
    {
        getline(cin, plain);
        tam = plain.size();

        for(i = 0; i < tam; ++i)
            if(isalpha(plain[i]))
                plain[i] = plain[i] + 3;

        for(i = 0, j = tam-1; i < tam/2; ++i, --j)
            swap(plain[i], plain[j]);

        for(i = (int)tam/2; i < tam; ++i)
            plain[i] = plain[i] - 1;

        cout << plain << endl;
    }

    return 0;
}