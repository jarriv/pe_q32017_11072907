#include <stdio.h>
#include <stdlib.h>

void impressao (int *v)
{
	int i=0;

	while(v[i]!='\0')
	{
		printf("%d ",v[i]);
		i++;
	}
}

int main(void) {
	int n,*vetor;
	scanf("%d",&n);
	vetor = malloc(n*sizeof(int));

	for(int i=0;i<n;i++)
	{
		scanf("%d",&vetor[i]);
	}

	impressao(vetor);
	free(vetor);

	return 0;
}
