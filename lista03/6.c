#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main(void) {
	double mediana;
	int n,*v;
	scanf("%d",&n);
	v = malloc(n*sizeof(int));

	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}

	qsort(v, n, sizeof(int), cmpfunc);

	if(n%2!=0)
	{
		mediana=v[n/2];
	}
	else
	{
		mediana=(v[n/2-1]+v[n/2])/2.0;
	}

	printf("%.2lf\n",mediana);

	return 0;
}
