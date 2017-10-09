/*
 * Lista 2 - Questão 4
 * Com os conhecimentos obtidos na lista 01 faça um programa calculadora, este programa
 * deve receber uma operacao e apóos saber a operação os valores em ponto flutuante (float)
 * devem ser inseridos. A calculadora deve conter as operações de soma (x + y) (opção 1 ),
 * subtraçãao (x − y) (opção 2 ), multiplicação (x ∗ y) (opção 3 ), divisão (x/y) (opção 4 ) e
 * potenciaçãao (x^y) (opção 5 ). Cada operação deve ser encapsulada em uma função.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	float a,b,calculo;
	int opcao;

	scanf("%d %f %f",&opcao,&a,&b);

	switch (opcao) {
	case 1:
		calculo = a+b;
		break;
	case 2:
		calculo = a-b;
		break;
	case 3:
		calculo = a*b;
		break;
	case 4:
		calculo = a/b;
		break;
	case 5:
		calculo = pow(a,b);
		break;
	default:
		break;
	}
	printf("%.2f\n",calculo);


	return 0;
}
