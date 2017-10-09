/*
 * Lista 2 - Questão 10
 */

#include <stdio.h>
#include <stdlib.h>

int fibMem[1000];

int fib (int n)
{
	if(n==0) return 0;
	if(n<=2) return 1;
	return fib(n-1)+fib(n-2);
}

int main(void) {

	int n;
	fibMem[1]=1;
	fibMem[2]=1;

	scanf("%d",&n);

	for(int i=0;i<=n;i++)
	{
		printf("%d ",fib(i));
	}

	printf("\n");

	return 0;
}
