#include <iostream>

using namespace std;

int main()
{
    int v[10]{6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, N, s;
    int tam, i, p;
    string tmp;

    cin >> N;
    while(N--)
    {
        s = 0;
        cin >> tmp;
        tam = tmp.size();

        for(i = 0; i < tam; ++i)
        {
            p = tmp[i] - '0';
            s += v[p];
        }
        
        cout << s << " leds\n";
    }
}