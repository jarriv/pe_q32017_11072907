/*
 * Programa para cálculo de números primos
 */

#include <stdio.h>
#include <stdlib.h>

int primo(int n, int controle)
{
	if(n<=1)
	{
		return -1;
	}

	else if(controle==n)
	{
		return 0;
	}
	else if(controle==0 || controle==1)
	{
		return 0 + primo(n,controle+1);
	}
	else if(n%controle==0)
	{
		return 1 + primo(n,controle+1);
	}
	else
	{
		return 0 + primo(n,controle+1);
	}
}

int main(void) {
	int x;

	//scanf("%d",&x);

	//printf("Numero de divisores de %d é: %d",x,primo(x,0));


	for(int i=0;i<=1000;i++)
	{
		if(primo(i,0)==0)
		{
			printf("O numero %d é primo\n",i);
		}
		else
		{

		}
	}

	return EXIT_SUCCESS;
}
