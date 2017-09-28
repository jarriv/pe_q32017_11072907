#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int soma=0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	double media;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);


		soma = a1+ a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
		media = (a1+ a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10)/10.0;

		printf("Saida\t: soma  = %d\nmedia = %lf\n\n",soma,media);

	}
	return 0;
}
