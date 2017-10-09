/*
 * Lista 2 - Questão 7
 */

#include <stdio.h>
#include <stdlib.h>

float dec_bin(float b)
{
	float exp =1, saida = 0;

	int n = (int)b;

	do
	{
		saida = saida+((int)n%2)*exp;
		n/=2;
		exp=exp*10;
	}while(n/2>1);

	saida = saida+ (n%2)*exp;

	exp=exp*10;

	saida = saida+ (n/2)*exp;

	return saida;

}

float bin_dec(float b)
{
	float exp =1, saida = 0;

	int n = (int)b;

	do
	{
		saida = saida+((int)n%10)*exp;
		n/=10;
		exp=exp*2;
	}while(n/10>1);

	saida = saida+ (n%10)*exp;

	exp=exp*2;

	saida = saida+ (n/10)*exp;

	return saida;

}

float c_k(float t)
{
	return t+273.15;
}

float k_c(float t)
{
	return t-273.15;
}

float c_f(float t)
{
	return 1.8*t+32;
}

float f_c(float t)
{
	return (t-32)/1.8;
}

float k_f(float t)
{
	return t*(9.0/5)-459.67;
}

float f_k(float t)
{
	return (t+459.67)*(5.0/9);
}

int main(void) {

	int tipo,entrada,saida;
	float valor, resultado;


	scanf("%d %d %d %f",&tipo,&entrada,&saida,&valor);

	switch (tipo) {
	case 1:

		if(entrada==1 && saida==2)
			resultado = c_f(valor);
		else if(entrada==1 && saida==3)
			resultado = c_k(valor);
		else if(entrada==2 && saida==1)
			resultado = f_c(valor);
		else if(entrada==2 && saida==3)
			resultado = f_k(valor);
		else if(entrada==3 && saida==1)
			resultado = k_c(valor);
		else if(entrada==3 && saida==2)
			resultado = k_f(valor);

		printf("%.2f",resultado);

		switch (saida) {
		case 1:
			printf(" C\n\n");
			break;
		case 2:
			printf(" F\n\n");
			break;
		case 3:
			printf(" K\n\n");
			break;
		default:
			break;
		}

		break;

		case 2:


			if(entrada==1 && saida==2)
				printf("%.0f\n",dec_bin(valor));

			else if(entrada==2 && saida==1)
				printf("%.0f\n",bin_dec(valor));


			break;
		default:
			break;
	}


	return 0;
}
