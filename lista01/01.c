#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d",&x);
		if((x%2)==0)
		{
			printf("Saida\t: Par\n\n");
		}
		else
		{
			printf("Saida\t: Impar\n\n");
		}
	}
	return 0;
}
