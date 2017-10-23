#include <stdio.h>
#include <stdlib.h>

void preenche(int **v,int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			*(*(v + i) + j)=0;
		}
	}
}

int main(void) {

	int n,m,**v;
	scanf("%d %d",&m,&n);

	v = malloc(m*sizeof(int));
	for(int i=0;i<m;i++)
	{
		v[i]=malloc(n*sizeof(int));
	}

	preenche(v,m,n);

	for(int i=0;i<m;i++)
	{
		free(v[i]);
	}

	free(v);

	return 0;
}
