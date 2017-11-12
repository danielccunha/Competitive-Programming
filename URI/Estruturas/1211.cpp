#include <iostream>
#include <algorithm>

#define MAXN 112345

using namespace std;

int main()
{
    int N, i, j, q, t;
    string lista[MAXN], emCima, aux;
    bool igualAnterior;

    while(cin >> N)
    {
        for(i = 0; i < N; ++i)
            cin >> lista[i];
            
        sort(lista, lista+N);

        emCima = lista[0];
        t = lista[0].size();
        q = 0;

        for(i = 1; i < N; ++i)
        {
            igualAnterior = true;
            
            for(j = 0; j < t; ++j)
            {
                if(!igualAnterior)
                    emCima[j] = lista[i][j];
                else if(lista[i][j] == emCima[j])
                    q++;
                else
                {
                    emCima[j] = lista[i][j];
                    igualAnterior = false;
                }
            }
        }

        cout << q << endl;
    }

    return 0;
}