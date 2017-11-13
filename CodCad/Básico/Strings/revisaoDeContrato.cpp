#include <cstdio>
#include <cstring>

#define MAXD 102

int main()
{
    int D, i, j;
    char S[MAXD], out[MAXD];
    bool notZero;

    while(scanf("%d %s", &D, S) && !(D == 0 && S[0] == '0' && S[1] == '\0'))
    {
        notZero = false;
        j = 0;

        for(i = 0; i < (int)strlen(S); ++i)
            if(S[i] != '0' + D)
            {
                if(S[i] != '0' && !notZero) notZero = true;
                if(notZero) out[j++] = S[i];
            }

        if(j == 0) out[j++] = '0';
        out[j] = '\0';

        printf("%s\n", out);
    }

    return 0;
}