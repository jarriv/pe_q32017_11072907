#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int opcao;
	double temp;
	while(1)
	{
		printf("Entrada : ");
		scanf("%lf %d",&temp,&opcao);


		if(opcao==1)
		{
			printf("Saida\t: %.2lf\n\n",temp+273.15);
		}
		else if(opcao==2)
		{
			printf("Saida\t: %.2lf\n\n",temp-273.15);
		}
		//printf("Saida\t: %d\n\n",x*y);

	}
	return 0;
}
