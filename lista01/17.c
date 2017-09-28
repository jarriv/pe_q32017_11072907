#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y, soma_quad = 0, quad_soma=0;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d %d",&x,&y);

		loop:

		soma_quad = soma_quad + (x*x);
		quad_soma = quad_soma+x;

		x++;


		if(x<=y)
			goto loop;

		quad_soma = quad_soma*quad_soma;

		printf("Saida\t:\tsoma dos quadrados \t= %d \n\t\tquadrado da soma \t= %d \n\t\tdiferenca \t\t= %d\n\n",soma_quad,quad_soma,quad_soma-soma_quad);

		soma_quad = 0;
		quad_soma=0;


	}
	return 0;
}
