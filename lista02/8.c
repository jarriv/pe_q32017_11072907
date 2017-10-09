/*
 * Lista 2 - Exercício 8
 */

#include <stdio.h>
#include <stdlib.h>

double calculo_salario(int cargo, int falta, int hora_extra)
{
	double salario,base_dia,base_hora,desconto,total_extra;

	switch (cargo) {
	case 1:
		salario = 10000;
		break;
	case 2:
		salario = 8000;
		break;
	case 3:
		salario = 5000;
		break;
	case 4:
		salario = 3000;
		break;
	case 5:
		salario = 2000;
		break;
	default:
		break;
	}

	base_dia = salario/20.0;
	base_hora = base_dia/8.0;
	desconto = base_dia*falta;
	if(hora_extra<=40)
		total_extra = (base_hora+40.0)*hora_extra;
	else
		total_extra = (base_hora+40.0)*40.0;

	return salario-desconto+total_extra;

}

int main(void) {

	int cargo,falta,hora_extra;
	scanf("%d %d %d",&cargo,&falta,&hora_extra);
	printf("%.0lf\n",calculo_salario(cargo,falta,hora_extra));

	return 0;
}
