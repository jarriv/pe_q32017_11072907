#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,saida=1,aux=1;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d",&x);

		loop:

		saida = saida*aux;
		aux++;

		if(aux<=x)
			goto loop;

		printf("Saida\t: %d\n\n",saida);

		saida=1;
		aux = 1;

	}
	return 0;
}
