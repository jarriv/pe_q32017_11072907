#include <stdio.h>
#include <stdlib.h>

double coef(double n,double k)
{
	if(k==0 || n==k)
		return 1.0;
	return coef(n-1,k-1)+coef(n-1,k);
}

int main(void) {

	double n,k;

	scanf("%lf %lf",&n,&k);
	printf("%.0lf\n",coef(n,k));

	return 0;
}
