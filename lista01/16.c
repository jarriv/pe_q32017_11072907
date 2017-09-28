#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double falta, hora_extra, salario, base_dia,base_hora, desconto, acrescimo, total_extra;
	int cargo;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d %lf %lf",&cargo, &falta, &hora_extra);

		switch (cargo) {
		case 1:
			salario = 10000;
			printf("Saida\t: \tcargo\t\t : Diretor\n");

			break;
		case 2:
			salario = 8000;
			printf("Saida\t: \tcargo\t\t : Gerente\n");

			break;
		case 3:
			salario = 5000;
			printf("Saida\t: \tcargo\t\t : Engenheiro\n");

			break;
		case 4:
			salario = 3000;
			printf("Saida\t: \tcargo\t\t : Tecnico\n");

			break;
		case 5:
			salario = 2000;
			printf("Saida\t: \tcargo\t\t : Operador\n");

			break;
		default:
			break;
		}

		base_dia = salario/20;
		base_hora = base_dia / 8;
		desconto = base_dia*falta;
		if(hora_extra<=40)
			total_extra = (base_hora+40)*hora_extra;
		else
			total_extra = (base_hora+40)*40;

		printf("\t\t# de faltas\t : %.2lf\n \t\t# horas-extra\t : %.2lf\n \t\tdescontos\t : %.2lf\n\t\tacrescimos\t : %.2lf\n\t\tsalario\t\t : %.2lf\n\n",falta,hora_extra,desconto,total_extra,salario-desconto+total_extra);



	}
	return 0;
}
