#include <cstdio>
#include <cctype>
#include <cstring>

int main()
{
    char s[51];
    bool toggle;

    while(fgets(s, 51, stdin))
    {      
        toggle = true;

        for(int i = 0; i < strlen(s); ++i)
        {
            if(s[i] == ' ' || isdigit(s[i])) continue;

            if(toggle)
            {
                s[i] = toupper(s[i]);
                toggle = false;
            }
            else
            {
                s[i] = tolower(s[i]);
                toggle = true;
            }
        }
        printf("%s", s);
    }
}