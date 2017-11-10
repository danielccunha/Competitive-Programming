#include <iostream>
#include <string>
#include <cstring>
#define MAX 101

using namespace std;

int main()
{
    int N, full, half;
    int i, j, k, l;
    string in, out;

    cin >> N;
    cin.ignore();

    while(N--)
    {
        getline(cin, in);
        out = in;

        full = in.size();
        half = full/2;

        i = half - 1;
        j = half;
        if(full%2 == 1) j++;

        k = 0;
        l = full - 1;

        while(k != half)
        {
            out[k++] = in[i--];
            out[l--] = in[j++];
        }

        cout << out << endl;
    }

    return 0;
}