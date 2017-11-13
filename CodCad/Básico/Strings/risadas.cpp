#include <cstdio>
#include <cstring>
#define MAXC 51

bool isVogal(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    char l[MAXC], nS[MAXC], invS[MAXC];
    int i, j;
    bool fun = true;

    scanf("%s", l);
    
    j = 0;
    for(i = 0; i < (int)strlen(l); ++i)
        if(isVogal(l[i]))
            nS[j++] = l[i];

    nS[j]   = '\0';
    invS[j] = '\0';

    i = j - 1;
    j = 0;

    while(i >= 0)
        invS[j++] = nS[i--];
    
    for(i = 0; i < j; ++i)
        if(nS[i] != invS[i])
        {
            fun = false;
            break;
        }

    (fun) ? printf("S\n") : printf("N\n");

    return 0;
}