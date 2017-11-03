/*
	@Q 		quantidade de páginas lidas por dia
	@D 		número de dias que você adiantaria a leitura caso estivesse lendo @P páginas
	@P      quantidade de páginas que poderia ser lido por dia
	@x		tempo de leitura final
	@nP 	total de páginas

	Fórmula:
	P*x = Q*x + D
	(P - Q) * x = D
	x = D/(P - Q)
	
	nP = P * Q * x
*/
#include <cstdio>

int main() {
	int Q, D, P, nP;
	double x;

	while(scanf("%d", &Q) && Q != 0) {
		scanf("%d %d", &D, &P);

		x  = (double)D/(P - Q);
		nP = P * Q * x;

		printf("%d pagina", nP);
		(nP > 1) ? printf("s\n") : printf("\n");
	}

	return 0;
}