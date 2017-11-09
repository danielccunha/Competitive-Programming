#include <cstdio>
#include <cmath>
#include <map>

using std::map;

int main()
{
    int N, x, y, r;
    bool valido;
    map<int, int> PD;

    while(scanf("%d", &N) != EOF)
    {
        if(N < 0 || PD[N] == -1)
            printf("NO\n");
        else if(PD[N] == 1)
            printf("YES\n");
        else
        {
            x = 0;
            y = sqrt(N);
            valido = false;
    
            while(y >= x)
            {
                r = pow(x, 2) + pow(y, 2);
                PD[r] = 1;
    
                if(r == N)
                {
                    valido = true;
                    break;
                }
                else if(r < N)
                    x++;            
                else
                    y--;
            }
    
            if(valido)
                printf("YES\n");
            else
            {
                printf("NO\n");
                PD[N] = -1;
            }
        }
    }

    return 0;
}