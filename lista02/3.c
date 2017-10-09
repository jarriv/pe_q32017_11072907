/* Lista 2 - Questão 3
 * O algoritmo Gauss-Legendre aproxima o valor de π com rápida convergência, com
 * apenas 25 iterações ele consegue produzir os primeiros 45 milhões de dígitos. Começando
 * com a = 1, b = 1/√2, t = 1/4, p = 1, repete-se a seguinte sequência de instruções até
 * convergência:
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n;
	long double a,b,t,p,a1,valor_pi;

	a = 1.0;
	b = 1/sqrt(2);
	t = 1.0/4;
	p = 1.0;

	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t-(p*pow(a-a1,2));
		p = 2*p;
		a = a1;
	}

	valor_pi = pow(a+b,2)/(4*t);

	printf("%.50Lf\n",valor_pi);

	return 0;
}
