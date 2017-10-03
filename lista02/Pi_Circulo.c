/*
 * Programa para cálculo do pi
 * Através do cálculo da área
 * Com raio de 0,5
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double sorteio()
{
	return ((double)rand())/(double)RAND_MAX;
}

int main () {
   int i, n;
   time_t t;
   double x,y,equacao,valor_pi, ptos_circ = 0, total = 0;

   n = 50000000;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 50 */
   for( i = 0 ; i < n ; i++ ) {
      //printf("%lf\n", ((double)rand())/(double)RAND_MAX);
      //printf("%lf\n",sorteio());
	   x = sorteio();
	   y = sorteio();
	   equacao = pow(x-0.5,2)+pow(y-0.5,2);


	   if(equacao<=0.25)
	   {
		   ptos_circ++;
	   }
	   total++;

	   //printf("x = %lf - y = %lf - equacao = %lf - ptos_circ = %d - total = %d\n",x,y,equacao,ptos_circ,total);

   }

   valor_pi = 4*(ptos_circ/total);
   printf("Valor do PI para n = %d e de %.30lf\n\n",n,valor_pi);

   return(0);
}
