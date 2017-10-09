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

long double somatorio(long double k)
{
	long double total = 0,aux=0,a,b,c,d,e,f;

	loop:

	printf("aux=%Lf\n",aux);
	a = pow(-1,aux);
	printf("a = %Lf\n",a);
	b = fatorial(6*aux);
	printf("b = %Lf\n",b);
	c = 13591409 + 545140134*aux;
	printf("c = %Lf\n",c);
	d = fatorial(3*aux);
	printf("d = %Lf\n",d);
	e = pow(fatorial(aux),3);
	printf("e = %Lf\n",e);
	f = pow(640320,3*aux+1.5);
	printf("f = %Lf\n",f);

	total = total + ((a*b*c)/(d*e*f));

	aux++;

	if(aux<=k)
		goto loop;


	return total;
}

int main(void) {

	while(1)
	{
		long double k,den,resultado;
		scanf("%Lf",&k);

		den = 12*somatorio(k);
		resultado = 1/den;

		printf("%.50Lf\n\n", resultado);



		//printf("%lf",fatorial(k));
		//scanf("%d %d",&k,&a);
		//printf("%d",elevado(k,a));
	}

	return EXIT_SUCCESS;
}
