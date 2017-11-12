// Algoritmo base: https://github.com/leonardofalk/URI-Homework/blob/master/FUTECO/1152%20-%20Estradas%20Escuras.cpp
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAXN 200000

struct Edge
{
    int X, Y, C;
};

Edge edges[MAXN];
int  p[MAXN];
int  custoTotal, custoFinal, i, j;

bool cmp(Edge A, Edge B)
{
    return A.C < B.C;
}

int checaCaminho(int p[], int X, int Y)
{
    while(p[X] > -1)
        X = p[X];
     
    while(p[Y] > -1)
        Y = p[Y];
     
    if(X != Y) 
    {
        p[Y] = X;
        return 1;
    }
    
    return 0;
}

int main()
{
    int V, E;

    while(scanf("%d %d", &V, &E) && (V != 0 || E != 0))
    {
        custoTotal = custoFinal = 0;
        memset(p, -1, V*sizeof(int));

        for(int i = 0; i < E; ++i)
        {
            scanf("%d %d %d", &edges[i].X, &edges[i].Y, &edges[i].C);
            custoTotal += edges[i].C;
        }

        std::sort(edges, edges + E, cmp);

        i = 0; j = 1;

        while (j < V && i < E) 
        {
            if(checaCaminho(p, edges[i].X, edges[i].Y)) 
            {
                j++;
                custoFinal += edges[i].C;
            }
             
            i++;
        }

        printf("%d\n", custoTotal - custoFinal);
    }
}