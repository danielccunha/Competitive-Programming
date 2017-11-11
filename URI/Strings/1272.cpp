#include <cstdio>
#include <iostream>
#include <cstring>
#define MAXC 51

int main()
{
    int N, t, j;
    bool nextChar;
    char in[MAXC], out[MAXC];

    scanf("%d", &N);
    getchar();

    while(N--)
    {
        std::cin.getline(in, 51);
        t = strlen(in);

        nextChar = true;
        j = 0;

        for(int i = 0; i < t; ++i)
        {
            if(nextChar && in[i] != ' ')
            {
                out[j++] = in[i];
                nextChar = false;
            }
            else if(!nextChar && in[i] == ' ')
                nextChar = true;
            }
            
            out[j] = '\0';
            printf("%s\n", out);
    }

    return 0;
}