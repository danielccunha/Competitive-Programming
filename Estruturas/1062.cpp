#include <cstdio>
#include <stack>
#include <queue>

using std::stack;
using std::queue;

int main()
{
	int N, tmp, i, v;	// N = Número de vagões

	while(scanf("%d", &N) && N != 0)
	{
		while(scanf("%d", &tmp) && tmp != 0)
		{
		    stack<int> est, B;
		    queue<int> out;

			out.push(tmp);
			for(i = 1; i < N; ++i)
			{
				scanf("%d", &tmp);
				out.push(tmp);
			}

			i = 1;

			while(B.size() != N)
			{
				if(!est.empty() && out.front() == est.top())
				{
					v = est.top();
					est.pop();
					out.pop();
					B.push(v);
				}
				else if(out.front() == i)
				{
					B.push(i++);
					out.pop();
				}
				else if(i <= N)
					est.push(i++);
				else
					break;
			}

			(B.size() == N) ? printf("Yes\n") : printf("No\n");
		}
		printf("\n");
	}

	return 0;
}
