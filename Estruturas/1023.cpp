#include <cstdio>
#include <map>
#include <cmath>

using std::map;

int main()
{
    int N, X, Y, cidade = 0;    // X = moradores, Y = consumo
    int media, tP, tC;  // tP = total de pessoas, tC = total de consumo
    map<int, int> m;

    while(scanf("%d", &N) && N != 0)
    {
        tP = tC = 0;
        while(N--)
        {
            scanf("%d %d", &X, &Y);
            tP += X;
            tC += Y;
            
            media = Y/X;
            m[media] += X;
        }
        
        printf("Cidade# %d:\n", ++cidade);
        for(auto it = m.begin(); it != m.end(); ++it)
            printf("%d-%d ", it->second, it->first);
        
        printf("\nConsumo medio: %.2f m3.\n\n", floor(100 * (float)tC/tP) / 100);
        m.clear();
    }
    
	return 0;
}