#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,saida=1,aux=1;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d %d",&x,&y);

		loop:

		saida = saida * x;
		aux++;

		if(aux<=y)
			goto loop;

		printf("Saida\t: %d\n\n",saida);

		saida=1;
		aux = 1;

	}
	return 0;
}
