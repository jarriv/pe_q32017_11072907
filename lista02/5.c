/*
 * Lista 2 - Questão 5
 */

#include <stdio.h>
#include <stdlib.h>

long double fatorial(int n)
{
	if(n==0)
		return 1.0;
	return n*fatorial(n-1);
}

long double coef_binomial(int n, int k)
{
	return fatorial(n)/(fatorial(k)*fatorial(n-k));
}

int main(void) {
	int n,k;

	scanf("%d %d",&n,&k);
	printf("%.0Lf\n",coef_binomial(n,k));

	return 0;
}
