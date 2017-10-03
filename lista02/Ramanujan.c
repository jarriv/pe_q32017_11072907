#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fatorial(double x)
{
	double total = 1,aux=1;

	loop:
	total = total*aux;
	aux++;

	if(aux<=x)
		goto loop;

	return total;
}

double somatorio(double k)
{
	double total = 0,aux=0,a,b,c,d;

	loop:

	a = fatorial(4*aux);
	b = 1103+26390*aux;
	c = pow(fatorial(aux),4);
	d = pow(396,4*aux);

	total = total + ((a*b)/(c*d));

	aux++;

	if(aux<=k)
		goto loop;


	return total;
}

int main(void) {

	while(1)
	{
		double k,den,resultado;
		scanf("%lf",&k);

		den = ((2*sqrt(2))/9801)*somatorio(k);
		resultado = 1/den;

		printf("%.30lf\n\n", resultado);



		//printf("%lf",fatorial(k));
		//scanf("%d %d",&k,&a);
		//printf("%d",elevado(k,a));
	}

	return EXIT_SUCCESS;
}
