#include <cstdio>

// 45

int main()
{
 	int N, caso = 0, i, j;
	int q[9], col[9], line[9], v[9], tmp, x;

	scanf("%d", &N);

	while(N--)
	{
		for(i=0; i<9; ++i) q[i] = col[i] = line[i] = v[i] = 0;
		
		for(i=0; i<9; ++i)
			for(j=0; j<9; ++j)
			{
				scanf("%d", &tmp);

				if(i < 3) x=0;
				else (i < 6) ? x=3 : x=6;

				if(j > 2) (j < 6) ? x+=1 : x+=2;
				
				++v[tmp-1];
				q[x]	+= tmp;
				col[j]  += tmp;
				line[i] += tmp;
			}

		bool valido = true;

		for(i=0; i<9; ++i)
			if(v[i] != 9 || q[i] != 45 || line[i] != 45 || col[i] != 45)
			{
				valido = false;
				break;
			}

		printf("Instancia %d\n", ++caso);
		(valido) ? printf("SIM\n\n") : printf("NAO\n\n");
	}

	return 0;
}