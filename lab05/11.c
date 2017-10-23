#include <stdio.h>
#include <stdlib.h>

void imprime_endereco(int *v, int n)
{
	int posicao;

	for(int i=0;i<n;i++)
	{
		posicao = &v[i];
		if(posicao%2!=0)
			printf("%p\n",&v[i]);
	}
}

int main(void) {

	int n,*v;
	scanf("%d",&n);

	v = malloc(n*sizeof(int));
	imprime_endereco(v,n);
	free(v);

	return 0;
}
