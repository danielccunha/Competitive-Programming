#include <cstdio>
#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm>
#define MAXC 201

struct Letra
{
    char c;
    int q;

    Letra()
    {
        q = 0;
    }
};

bool cmp(Letra a, Letra b)
{
    return a.q > b.q || (a.q == b.q && a.c < b.c);
}

int main()
{
    int N, t;
    char in[MAXC];
    
    scanf("%d", &N);
    getchar();

    while(N--)
    {
        std::cin.getline(in, MAXC);
    
        Letra v[26];
        for(int i = 0; i < 26; ++i)
            v[i].c = 'a' + i;
    
        t = strlen(in);

        for(int i = 0; i < t; ++i)
            if(isalpha(in[i]))
            {
                in[i] = tolower(in[i]);
                v[in[i] - 'a'].q++;
            }

        std::sort(v, v+26, cmp);

        printf("%c", v[0]);
        t = 1;
        while(v[t].q == v[t-1].q)
            printf("%c", v[t++].c);
        printf("\n");
    }

    return 0;
}