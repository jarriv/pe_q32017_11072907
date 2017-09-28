#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=100,fim;
	while(1)
	{
		printf("Entrada : ");
		scanf("%d",&fim);

		loop:

		if(x%2==0)
			printf("%d ",x);

		x++;

		if(x<=fim)
			goto loop;

		printf("\n\n");

		x=100;

	}
	return 0;
}
