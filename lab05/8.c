#include <stdio.h>
#include <stdlib.h>

void preenche(int *v, int n)
{
	for(int i=0;i<n;i++)
	{
		v[i]=0;
	}
}

int main(void) {

	int n,*v;
	scanf("%d",&n);

	v = malloc(n*sizeof(int));
	preenche(v,n);

	free(v);

	return 0;
}
