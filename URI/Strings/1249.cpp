#include <cstdio>
#include <iostream>
#include <cctype>
#include <cstring>
#define MAXC 51

int main()
{
    int t, j, c;
    char in[MAXC], out[MAXC];

    while(std::cin.getline(in, MAXC))
    {
        t = strlen(in);
        j = 0;

        for(int i = 0; i < t; ++i)
        {
            if(isalpha(in[i]))
            {
                (isupper(in[i])) ? c = 'A' : c = 'a';
                in[i] = (((in[i] - c) + 13) % 26) + c;
            }

            out[j++] = in[i];
        }

        out[j] = '\0';
        printf("%s\n", out);
    }

    return 0;
}