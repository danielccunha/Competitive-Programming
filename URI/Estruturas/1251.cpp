#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
#define MAXC 1001

using std::map;
using std::vector;
using std::sort;
using std::pair;

bool comp(pair<int, int> a, pair <int, int> b)
{
    return a.second < b.second || (a.second == b.second && a.first > b.first);
}

int main()
{
    char c;
    map<int, int> m;
    bool first = true;

    while(scanf("%c", &c) != EOF)
    {
        if(c == '\n') // Caso tenha terminado a frase
        {
            if(first) first = false;
            else      printf("\n");

            vector< pair<int, int> > freq(m.begin(), m.end());
            sort(freq.begin(), freq.end(), comp);
            m.clear();

            for(auto p: freq)
                printf("%d %d\n", p.first, p.second);            
        }
        else
            m[c]++;
    }

    return 0;
}
