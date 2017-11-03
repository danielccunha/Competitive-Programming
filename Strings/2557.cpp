#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
    string eq;
    char aux[7];
    char missing;    // R, L, J
    int R, L, J;
    int i, p, tam;

    while(getline(cin, eq))
    {
        tam = eq.size();
        p   = 0;
        missing = 'N';  // None
        for(i = 0; i < tam; ++i)
        {
            if(eq[i] == 'R')
                missing = 'R';
            else if(eq[i] == 'L')
                missing = 'L';
            else if(eq[i] == 'J')
                missing = 'J';
            else if(isdigit(eq[i]))
                aux[p++] = eq[i];
            else
            {
                if(eq[i] == '+' && missing != 'R')
                {
                    aux[p] = '\0';
                    R = atoi(aux);
                    p = 0;
                }
                else if(eq[i] == '=' && missing != 'L')
                {
                    aux[p] = '\0';
                    L = atoi(aux);
                    p = 0;
                }
            }
        }

        if(missing != 'J')
        {
            aux[p] = '\0';
            J = atoi(aux);
        }

        if(missing == 'R')
        {
            R = J - L;
            cout << R << endl;
        }
        else if(missing == 'L')
        {
            L = J - R;
            cout << L << endl;
        }
        else
        {
            J = R + L;
            cout << J << endl;
        }
    }

    return 0;
}