#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int tamanho=-1,i=-1,j=0,k;
	char entrada[255],saida[255];
	fgets(entrada,255,stdin);

	while(entrada[++i]!='\0')
	{
		tamanho++;
	}


	for(k=tamanho-1;k>=0;k--)
	{
		saida[k] = entrada[j];
		j++;
	}

	/*
	while(tamanho>=0)
	{
		saida[tamanho] = entrada[j];
		tamanho--;
		j++;
	}
	*/

	printf("%s\n",saida);

	return 0;
}
