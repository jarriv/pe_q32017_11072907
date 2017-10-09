/*
 * Lista 2 - Questão 1
 * Receba um valor inteiro e retorne 0 caso par e 1 caso ímpar
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;

	scanf("%d",&x);
	if(x%2==0)
		printf("0\n");
	else
		printf("1\n");

	return 0;
}
