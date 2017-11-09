#include <cstdio>
#include <cstring>

int main()
{
    int N;
    char w[6];

    scanf("%d", &N);
    while(N--)
    {
        scanf("%s", w);

        if(strlen(w) == 5)
            printf("3\n");
        else
        {
            if((w[0] == 'o' && w[1] == 'n') || (w[0] == 'o' && w[2] == 'e') || (w[1] == 'n' && w[2] == 'e'))
                printf("1\n");
            else
                printf("2\n");
        }
    }

    return 0;
}