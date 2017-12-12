#include <cstdio>
#include <stack>
#include <queue>

using std::stack;
using std::queue;
using std::priority_queue;

int main()
{
    int C, n, x, i;
    bool bS, bQ, bPQ;

    while(scanf("%d", &C) != EOF)
    {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;

        bS = bQ = bPQ = true;

        for(i = 0; i < C; ++i)
        {
            scanf("%d %d", &n, &x);
            if(bS || bQ || bPQ)
            {
                if(n == 1)
                {
                    if(bS)  s.push(x);
                    if(bQ)  q.push(x);
                    if(bPQ) pq.push(x);
                }
                else
                {
                    if(bS && x == s.top()) s.pop();
                    else if(bS)            bS = false;
                    
                    if(bQ && x == q.front()) q.pop();
                    else if(bQ)              bQ = false;

                    if(bPQ && x == pq.top()) pq.pop();
                    else if(bPQ)             bPQ = false;
                }
            }
        }

        if(bS && !bQ && !bPQ) // Stack
            printf("stack\n");
        else if(!bS && bQ && !bPQ) // Queue
            printf("queue\n");
        else if(!bS && !bQ && bPQ) // priority queue
            printf("priority queue\n");
        else if(!bS && !bQ && !bPQ) // impossible
            printf("impossible\n");
        else
            printf("not sure\n");
    }

    return 0;
}