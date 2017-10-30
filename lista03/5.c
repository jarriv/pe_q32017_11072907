#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int tamanho,*v,*v1,*v2,i,j,k;

	scanf("%d",&tamanho);

	v = malloc(tamanho*sizeof(int));
	v1 = malloc(tamanho*sizeof(int));
	v2 = malloc(tamanho*sizeof(int));

	for(i = 0;i<tamanho;i++)
	{
		scanf("%d",&v[i]);
		v1[i]=NULL;
		v2[i]=0;
	}

	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			if(v1[j]==NULL)
			{
				v1[j]=v[i];
				v2[j]++;
				break;
			}
			else if(v1[j]==v[i])
			{
				v2[j]++;
				break;
			}
		}
	}

	for(i=0;i<tamanho;i++)
	{
		if(v1[i]!=NULL)
		{
			if(v2[i]!=1)
				printf("%d-%d ",v1[i],v2[i]);
		}
		else
		{
			break;
		}
	}
	
	printf("\n");

	return 0;
}
