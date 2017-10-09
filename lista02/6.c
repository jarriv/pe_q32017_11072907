/*
 * Questão 2 - Lista 6
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double a,b,c,delta,x1,x2;

	scanf("%lf %lf %lf",&a,&b,&c);

	delta = pow(b,2)-4*a*c;
	x1 = (b*(-1)-sqrt(delta))/(2*a);
	x2 = (b*(-1)+sqrt(delta))/(2*a);

	if(delta>=0)
		printf("%.2lf %.2lf\n",x1,x2);
	else
	{
		delta = delta*-1;
		printf("(%.2lf-%.2lfi)/%.2lf (%.2lf+%.2lfi)/%.2lf\n",b*-1,sqrt(delta),2*a,b*-1,sqrt(delta),2*a);
	}

	return 0;
}
