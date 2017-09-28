#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int opcao,numero, exp=1, saida = 0;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d %d",&numero,&opcao);

		if(opcao==1)
		{

			loop:
			saida = saida + (numero%2)*exp;
			//printf("Saida\t: %d\n\n",(numero%2)*exp);

			if(numero/2>1)
			{
				numero/=2;
				exp=exp*10;
				goto loop;
			}
			else
			{
				exp=exp*10;
				saida = saida + (numero/2)*exp;
				//printf("Saida\t: %d\n\n",(numero/2)*exp);

				printf("Saida\t: %d\n\n",saida);

				exp = 1;
				saida = 0;
			}
		}
		else if (opcao==2)
		{

			loop2:
			saida = saida + (numero%10)*exp;
			//printf("Saida\t: %d\n\n",(numero%2)*exp);

			if(numero/10>1)
			{
				numero/=10;
				exp=exp*2;
				goto loop2;
			}
			else
			{
				exp=exp*2;
				saida = saida + (numero/10)*exp;
				//printf("Saida\t: %d\n\n",(numero/2)*exp);

				printf("Saida\t: %d\n\n",saida);

				exp = 1;
				saida = 0;
			}

		}

	}
	return 0;
}
