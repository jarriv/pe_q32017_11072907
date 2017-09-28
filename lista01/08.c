#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,saida=0,aux=1,anterior=0, atual = 1;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d",&x);
		printf("Saida\t: 0");


		loop:

		saida = anterior+atual;
		atual = anterior;
		anterior = saida;

		printf(", %d", saida);

		aux++;

		if(aux<=x)
			goto loop;

		//printf("Saida\t: %d\n\n",saida);

		saida = 0;
		aux = 1;
		anterior = 0;
		atual = 1;

		printf("\n\n");

	}
	return 0;
}
