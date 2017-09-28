#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int saida=0,fim,aux=1;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d",&fim);

		loop:

		saida = saida + aux;
		aux++;

		if(aux<=fim)
			goto loop;

		printf("Saida\t: soma de 1 a %d = %d\n\n",fim,saida);

		saida=0;
		aux = 1;

	}
	return 0;
}
