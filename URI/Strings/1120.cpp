#include <cstdio>
#include <cstdlib>
#include <cstring>

#define N 102

int main()
{
    int  c, i, j;
    char S[N], out[N];
    bool notZero;

    while(scanf("%d %s", &c, S) && !(c == 0 && S[0] == '0' && S[1] == '\0'))
    {
        notZero = false;
        for(i = 0, j = 0; i < strlen(S); i++)
            if(S[i] != '0' + c)
            {
                if(!notZero && S[i] != '0') notZero = true;
                if(notZero) out[j++] = S[i];
            }
        
        if(j == 0) out[j++] = '0';
        out[j] = '\0';

        printf("%s\n", out);
    }

    return 0;
}