#include <cstdio>
#include <cstring>
#include <map>
#define MAXC 201

std::map<char, double> m{{'W', 1.0}, {'H', 1/2.0}, {'Q', 1/4.0}, {'E', 1/8.0},
                         {'S', 1/16.0}, {'T', 1/32.0}, {'X', 1/64.0}};

char comp[MAXC];
double S;
int C, i;

int main()
{
    while(scanf("%s", comp) && comp[0] != '*')
    {
        C = S = 0;

        for(i = 1; i < (int)strlen(comp); ++i)
        {
            if(comp[i] != '/')
                S += m[comp[i]];
            else
            {
                if(S == 1) C++;
                S = 0;
            }
        }

        printf("%d\n", C);
    }
    
    return 0;
}