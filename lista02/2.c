/*
 * Lista 2 - Questão 2
 * Receba os valores em ponto flutuante de largura, comprimento e altura de um objeto
 * e calcule seu volume (a sa´ıda deve ter apenas duas casas decimais).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double x,y,z;

	scanf("%lf %lf %lf",&x,&y,&z);
	printf("%.2lf\n",x*y*z);

	return 0;
}
