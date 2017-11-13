#include <cstdio>
#define MAXN 100

struct Aluno
{
    int v;
    bool b;
    char p;

    Aluno()
    {
        b = false;
        p = 'N';
    }
};

Aluno m[MAXN][MAXN];
int N, i, j, iniX, iniY, nBandeiras = 0;

char girarPos(char c)
{
    if(c == 'N')
        return 'L';
    else if(c == 'L')
        return 'S';
    else if(c == 'S')
        return 'O';
    else
        return 'N';
}

void girarAluno(int x, int y)
{
    if(!m[x][y].b)
    {
        m[x][y].b = true;
        nBandeiras++;
    }

    for(int k = 0; k < 4; ++k)
    {
        m[x][y].p = girarPos(m[x][y].p);
        if(m[x][y].p == 'N' && x != 0 && m[x][y].v <= m[x-1][y].v && !m[x-1][y].b)
            girarAluno(x-1, y);
        else if(m[x][y].p == 'L' && y != (N-1) && m[x][y].v <= m[x][y+1].v && !m[x][y+1].b)
            girarAluno(x, y+1);
        else if(m[x][y].p == 'S' && x != (N-1) && m[x][y].v <= m[x+1][y].v && !m[x+1][y].b)
            girarAluno(x+1, y);
        else if(m[x][y].p == 'O' && y != 0 && m[x][y].v <= m[x][y-1].v && !m[x][y-1].b)
            girarAluno(x, y-1);
    }
}

int main()
{

    scanf("%d", &N);
    scanf("%d %d", &iniX, &iniY);
    iniX--; iniY--;

    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
            scanf("%d", &m[i][j].v);

    girarAluno(iniX, iniY);

    printf("%d\n", nBandeiras);

    return 0;
}